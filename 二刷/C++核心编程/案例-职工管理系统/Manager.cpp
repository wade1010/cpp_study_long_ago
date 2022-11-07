#include "Manager.h"

Manager::Manager(int id, string name, int deptId) {
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = deptId;
}

void Manager::showInfo() {
    cout << "职工编号" << this->m_Id << "\t职工姓名：" << this->m_Name <<
         "\t岗位:" << this->getDeptName()
         << "\t岗位职责：" << "完成经历交代的任务" << endl;
}

string Manager::getDeptName() {
    return string("经理");
}