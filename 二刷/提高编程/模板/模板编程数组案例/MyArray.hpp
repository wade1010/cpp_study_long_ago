//自己的通用的数组类
#pragma once

#include "iostream"

using namespace std;

template<class T>
class MyArray {
public:
    //有参构造
    MyArray(int capacity) {
        cout << "有参构造" << endl;
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->addr = new T[capacity];
    }

    //析构
    ~MyArray() {
        cout << "析构" << endl;
        if (this->addr != nullptr) {
            delete[] this->addr;
            this->addr = nullptr;
        }
    }

    //拷贝构造
    MyArray(const MyArray<T> &ma) {
        cout << "拷贝构造" << endl;
        this->m_Capacity = ma.m_Capacity;
        this->m_Size = ma.m_Size;
//        this->addr=ma.addr;//默认的浅拷贝，有问题

        //深拷贝
        this->addr = new T[this->m_Capacity];
        //将arr中的数据都拷贝出来
        for (int i = 0; i < this->m_Size; i++) {
            this->addr[i] = ma.addr[i];
        }
    }

    //operator= 防止浅拷贝问题
    MyArray &operator=(const MyArray<T> &ma) {
        cout << "=调用" << endl;
        //判断如果是自己，就直接返回
        if (this == &ma) {
            return *this;
        }
        if (this->addr != nullptr) {
            delete[] this->addr;
            this->addr = nullptr;
        }
        //深拷贝
        this->m_Capacity = ma.m_Capacity;
        this->m_Size = ma.m_Size;
        this->addr = new T[this->m_Capacity];
        for (int i = 0; i < this->m_Size; i++) {
            this->addr[i] = ma.addr[i];
        }
        return *this;
    }

    //尾插法
    bool pushBack(const T &t) {
        if (this->m_Size == this->m_Capacity) {
            cout << "已经满了" << endl;
            return false;
        }
        this->addr[this->m_Size] = t;
        this->m_Size++;
        return true;
    }

    //尾删法
    bool popBack() {
        if (this->m_Size == 0) {
            cout << "没有可删除的元素" << endl;
            return false;
        }
        this->m_Size--;
        return true;
    }

    //重载[]运算符   另外还需要作为左值 继续赋值  arr[0]=100
    T &operator[](int index) {
        if (index < 0 || index >= this->m_Size) {
            throw logic_error("访问越界");
        }
        return this->addr[index];
    }

    //返回数组容量
    int getCapacity() {
        return this->m_Capacity;
    }

    //返回数组大小
    int getSize() {
        return this->m_Size;
    }

private:
    T *addr;//指针指向堆区开辟的真实数组
    int m_Capacity;//数组容量
    int m_Size;//数组大小
};