#pragma once

#include "Worker.h"

class Employee : public Worker {
public:
    //构造函数
    Employee(int id, string name, int deptId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual string getDeptName();

};

