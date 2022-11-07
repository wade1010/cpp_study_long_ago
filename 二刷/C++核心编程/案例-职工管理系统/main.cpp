#include "WorkManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

void test() {
    Worker *worker = new Boss(1, "张三", 1);
    worker->showInfo();

    Worker *worker2 = new Manager(2, "李四", 2);
    worker2->showInfo();

    Worker *worker3 = new Employee(3, "王五", 3);
    worker3->showInfo();
}

int main() {
//    test();
    WorkManager wm;

    int choice;
    while (true) {
        wm.showMenu();
        cout << "请输入选择：" << endl;
        cin >> choice;
        switch (choice) {
            case 0://退出系统
                wm.exitSystem();
                return 0;
            case 1://增加职工
                wm.addEmp();
                break;
            case 2://显示职工
                wm.showEmp();
                break;
            case 3://删除职工
                wm.deleteEmp();
                break;
            case 4://修改职工
                wm.updateEmp();
                break;
            case 5://查找职工
                wm.findEmp();
                break;
            case 6://排序
                wm.sortEmp();
                break;
            case 7://清空
                wm.cleanFile();
                break;
            default:
                break;
        }
    }

    return 0;
}