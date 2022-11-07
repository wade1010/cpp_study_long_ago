#include "WorkManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include "fstream"

WorkManager::WorkManager() {
    ifstream ifs(FILENAME, ios::in);
    //1 文件不存在
    if (ifs.fail()) {
        cout << "文件不存在" << endl;
        //初始化属性
        this->m_EmpNum = 0;
        this->m_EmpArr = nullptr;
        this->m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    //2 文件存在 数据为空
    char c;
    ifs >> c;
    if (ifs.eof()) {
        cout << "文件存在，但数据为空" << endl;
        //初始化属性
        this->m_EmpNum = 0;
        this->m_EmpArr = nullptr;
        this->m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    //3 文件存在且有数据
    int num = this->getEmpNum();//这个感觉没必要，可以在initEmp里面实现
    cout << "职工人数为：" << num << endl;
    this->m_EmpNum = num;
    this->m_EmpArr = new Worker *[num];
    this->initEmp();
}

WorkManager::~WorkManager() {
    if (this->m_EmpArr != nullptr) {
        for (int i = 0; i < sizeof(m_EmpArr) / sizeof(m_EmpArr[0]); i++) {
            delete this->m_EmpArr[i];
            this->m_EmpArr[i] = nullptr;
        }
        delete[] this->m_EmpArr;
        this->m_EmpArr = nullptr;
    }
}

//展示菜单
void WorkManager::showMenu() {
    cout << "********************************************" << endl;
    cout << "***************欢迎使用职工管理系统*************" << endl;
    cout << "***************0：退出管理程序*************" << endl;
    cout << "***************1：增加职工信息*************" << endl;
    cout << "***************2：显示职工信息*************" << endl;
    cout << "***************3：删除离职职工*************" << endl;
    cout << "***************4：修改职工信息*************" << endl;
    cout << "***************5：查找职工信息*************" << endl;
    cout << "***************6：按照编号排序*************" << endl;
    cout << "***************7：清空所有文档*************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

void WorkManager::exitSystem() {
    cout << "欢迎下次使用" << endl;
    exit(0);
}

void WorkManager::addEmp() {
    cout << "请输入添加职工数量：" << endl;
    int num = 0;
    cin >> num;
    if (num > 0) {
        //添加
        //计算添加新空间大小
        int newSize = this->m_EmpNum + num;
        //开辟空间
        Worker **newSpace = new Worker *[newSize];
        if (this->m_EmpArr != nullptr) {
            for (int i = 0; i < this->m_EmpNum; i++) {
                newSpace[i] = this->m_EmpArr[i];
            }
        }
        //批量添加新数据
        for (int i = 0; i < num; i++) {
            int id;
            string name;
            int deptId;
            cout << "请输入第" << i + 1 << "个新职工编号" << endl;
            cin >> id;
            cout << "请输入该职工姓名" << endl;
            cin >> name;
            cout << "请选择该职工岗位" << endl;
            cout << "1、老板" << endl;
            cout << "2、经理" << endl;
            cout << "3、普通职工" << endl;
            cin >> deptId;
            Worker *worker = nullptr;
            switch (deptId) {
                case 1:
                    worker = new Boss(id, name, deptId);
                    break;
                case 2:
                    worker = new Manager(id, name, deptId);
                    break;
                default:
                    worker = new Employee(id, name, deptId);
                    break;
            }
            newSpace[this->m_EmpNum + i] = worker;
        }
        //释放原有空间
        delete[] this->m_EmpArr;
        this->m_EmpArr = newSpace;
        this->m_EmpNum = newSize;
        this->m_FileIsEmpty = false;
        cout << "成功添加" << num << "名新职工" << endl;
        //保存到文件
        this->save();
    } else {
        cout << "输入数据有误" << endl;
    }
}

void WorkManager::save() {
    ofstream ofs(FILENAME, ios::out);
    for (int i = 0; i < this->m_EmpNum; i++) {
        Worker *w = this->m_EmpArr[i];
        ofs << w->m_Id << " "
            << w->m_Name << " "
            << w->m_DeptId << endl;
    }
    ofs.close();
}

int WorkManager::getEmpNum() {
    ifstream ifs(FILENAME, ios::in);
    int id;
    string name;
    int deptId;
    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> deptId) {
        num++;
    }
    ifs.close();
    return num;
}

void WorkManager::initEmp() {
    ifstream ifs(FILENAME, ios::in);
    int id;
    string name;
    int deptId;
    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> deptId) {
        Worker *worker = nullptr;
        if (deptId == 1) {//老板
            worker = new Boss(id, name, deptId);
        } else if (deptId == 2) {
            worker = new Manager(id, name, deptId);
        } else {
            worker = new Employee(id, name, deptId);
        }
        worker->m_DeptId = deptId;
        worker->m_Name = name;
        worker->m_Id = id;
        this->m_EmpArr[index] = worker;
        index++;
    }
    ifs.close();
}

void WorkManager::showEmp() {
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空" << endl;
    } else {
        for (int i = 0; i < this->m_EmpNum; i++) {
            this->m_EmpArr[i]->showInfo();
        }
    }
}

int WorkManager::isExist(int id) {
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; i++) {
        if (this->m_EmpArr[i]->m_Id == id) {
            index = i;
            break;
        }
    }
    return index;
}

void WorkManager::deleteEmp() {
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空" << endl;
        return;
    }
    cout << "请输入要删除职工的编号:" << endl;
    int id;
    cin >> id;
    int index = this->isExist(id);
    if (index == -1) {
        cout << "该职工不存在" << endl;
        return;
    }
    //删除最后一个
    if (index == this->m_EmpNum - 1) {
        this->m_EmpNum--;
        return;
    }
    for (int i = index; i < this->m_EmpNum - 1; i++) {
        //数据前移
        this->m_EmpArr[i] = this->m_EmpArr[i + 1];
    }
    this->m_EmpNum--;
    this->save();
    cout << "删除成功" << endl;
    if (this->m_EmpNum == 0) {
        this->m_FileIsEmpty = true;
    }

}

void WorkManager::updateEmp() {
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空" << endl;
        return;
    }
    cout << "请输入修改职工的Id" << endl;
    int id;
    cin >> id;
    int index = this->isExist(id);
    if (index == -1) {
        cout << "该职工不存在" << endl;
        return;
    }
    string name;
    int deptId;
    cout << "请输入该职工姓名" << endl;
    cin >> name;
    cout << "请选择该职工岗位" << endl;
    cout << "1、老板" << endl;
    cout << "2、经理" << endl;
    cout << "3、普通职工" << endl;
    cin >> deptId;
    Worker *worker = nullptr;
    switch (deptId) {
        case 1:
            worker = new Boss(id, name, deptId);
            break;
        case 2:
            worker = new Manager(id, name, deptId);
            break;
        default:
            worker = new Employee(id, name, deptId);
            break;
    }
    delete this->m_EmpArr[index];
    this->m_EmpArr[index] = worker;
    cout << "修改成功" << endl;
    this->save();
}

void WorkManager::findEmp() {
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空" << endl;
        return;
    }
    cout << "请输入查找方式：" << endl;
    cout << "1、按职工编号查找" << endl;
    cout << "2、按姓名查找" << endl;
    int select;
    cin >> select;
    if (select == 1) {
        int id;
        cout << "请输入职工编号" << endl;
        cin >> id;
        int index = this->isExist(id);
        if (index != -1) {
            cout << "查找成功！该职工信息如下" << endl;
            this->m_EmpArr[index]->showInfo();
        } else {
            cout << "查无此人" << endl;
        }
    } else if (select == 2) {
        string name;
        cout << "请输入职工姓名" << endl;
        cin >> name;
        bool flag = false;
        for (int i = 0; i < this->m_EmpNum; i++) {
            if (this->m_EmpArr[i]->m_Name == name) {
                cout << "查找成功，信息如下：" << endl;
                this->m_EmpArr[i]->showInfo();
                flag = true;
            }
        }
        if (!flag) {
            cout << "查无此人" << endl;
        }
    } else {
        cout << "输入有误" << endl;
    }
}

void WorkManager::sortEmp() {
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空" << endl;
        return;
    }
    cout << "请选择排序方式" << endl;
    cout << "1、按职工号进行升序" << endl;
    cout << "2、按职工号进行降序" << endl;
    int select;
    cin >> select;
    for (int i = 0; i < m_EmpNum; i++) {
        int minOrMax = i;
        for (int j = i + 1; j < m_EmpNum; j++) {
            if (select == 1) {//升序
                if (m_EmpArr[minOrMax]->m_Id > m_EmpArr[j]->m_Id) {
                    minOrMax = j;
                }
            } else {
                if (m_EmpArr[minOrMax]->m_Id < m_EmpArr[j]->m_Id) {
                    minOrMax = j;
                }
            }
        }
        if (i != minOrMax) {
            Worker *temp = m_EmpArr[i];
            m_EmpArr[i] = m_EmpArr[minOrMax];
            m_EmpArr[minOrMax] = temp;
        }
    }
    cout << "排序成功，排序后结果为：" << endl;
    this->save();
    this->showEmp();
}

void WorkManager::cleanFile() {
    cout << "确认清空？" << endl;
    cout << "Y:确认" << endl;
    cout << "其他：返回" << endl;
    string select;
    cin >> select;
    if (select != "Y") {
        return;
    }
    ofstream ofs(FILENAME, ios::trunc);
    ofs.close();
    if (this->m_EmpArr != nullptr) {
        for (int i = 0; i < sizeof(m_EmpArr) / sizeof(m_EmpArr[0]); i++) {
            delete this->m_EmpArr[i];
            this->m_EmpArr[i] = nullptr;
        }
        this->m_EmpNum = 0;
        delete[] this->m_EmpArr;
        this->m_EmpArr = nullptr;
        this->m_FileIsEmpty = true;
    }
    cout << "清除成功" << endl;
}