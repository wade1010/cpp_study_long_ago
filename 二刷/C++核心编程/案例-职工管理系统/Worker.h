#pragma once

#include "iostream"

using namespace std;

//员工类
class Worker {
public:
    virtual ~Worker() {

    }

    //显示个人信息
    virtual void showInfo() = 0;

    //获取职工岗位名称
    virtual string getDeptName() = 0;

    int m_Id;
    string m_Name;
    int m_DeptId;
};
