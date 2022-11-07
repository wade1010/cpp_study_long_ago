#include "Employee.h"
#include "Worker.h"

Employee::Employee(int id, string name, int deptId) {
    m_Id = id;
    m_Name = name;
    m_DeptId = deptId;
}

//显示个人信息
void Employee::showInfo() {
    cout << "职工编号" << this->m_Id << "\t职工姓名：" << this->m_Name <<
         "\t岗位:" << this->getDeptName()
         << "\t岗位职责：" << "完成经理交代的任务" << endl;
}

//获取职工岗位名称
string Employee::getDeptName() {
    return string("员工");
}
