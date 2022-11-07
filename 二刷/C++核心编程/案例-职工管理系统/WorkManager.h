#pragma once

#include "iostream"
#include "Worker.h"

#define FILENAME "emp_file.txt"

using namespace std;

class WorkManager {
public:
    WorkManager();

    ~WorkManager();

    void showMenu();

    void exitSystem();

    //记录职工人数
    int m_EmpNum;
    //职工数组的指针
    Worker **m_EmpArr;
    bool m_FileIsEmpty;

    //添加职工
    void addEmp();

    //保存文件
    void save();

    //统计人数
    int getEmpNum();

    void initEmp();

    //显示职工
    void showEmp();

    int isExist(int id);

    void deleteEmp();

    void updateEmp();

    void findEmp();

    void sortEmp();

    void cleanFile();
};