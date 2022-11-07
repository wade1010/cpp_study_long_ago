#pragma once

#include "iostream"
#include "Worker.h"

using namespace std;

class Manager : public Worker {
public:
    Manager(int id, string name, int deptId);

    virtual void showInfo();

    //获取职工岗位名称
    virtual string getDeptName();
};