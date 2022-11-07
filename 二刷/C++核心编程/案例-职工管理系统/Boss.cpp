#include "Boss.h"


Boss::Boss(int id, string name, int deptId) {
    m_Id = id;
    m_Name = name;
    m_DeptId = deptId;
}

void Boss::showInfo() {
    cout << "职工编号" << this->m_Id << "\t职工姓名：" << this->m_Name <<
         "\t岗位:" << this->getDeptName()
         << "\t岗位职责：" << "管理公司的所有事务" << endl;
}

string Boss::getDeptName() {
    return string("老板");
}

