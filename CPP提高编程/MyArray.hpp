#ifndef FIRST_DEMO_MYARRAY_HPP
#define FIRST_DEMO_MYARRAY_HPP

#endif //FIRST_DEMO_MYARRAY_HPP

//自己通用的数组类
#pragma once

#include "iostream"

using namespace std;

template<class T>
class MyArray {
public:
    //有参构造
    MyArray(int c) {
        cout << "MyArray 构造函数" << endl;
        this->capacity = c;
        this->size = 0;
        this->pAddress = new T[c];
    }

    //析构函数
    ~MyArray() {
        cout << "MyArray 析构函数" << endl;
        if (this->pAddress != NULL) {
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

    //拷贝构造
    MyArray(const MyArray &other) {
        cout << "MyArray 拷贝构造" << endl;
        this->capacity = other.capacity;
        this->size = other.size;
//        this->pAddress = other.pAddress;//编译器默认浅拷贝
//深拷贝
        this->pAddress = new T(other.capacity);
//将other中的数据都拷贝过来
        for (int i = 0; i < this->size; i++) {
            this->pAddress[i] = other.pAddress[i];
        }
    }

    //operator= 防止浅拷贝问题
    MyArray &operator=(const MyArray &other) {
        cout << "MyArray operator=" << endl;
        //先判断原来堆区是否有数据，如果有先释放
        if (this->pAddress != NULL) {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->capacity = 0;
            this->size = 0;
        }

        //深拷贝
        this->capacity = other.capacity;
        this->size = other.size;
        this->pAddress = new T(other.capacity);
        for (int i = 0; i < this->size; i++) {
            this->pAddress[i] = other.pAddress[i];
        }
        return *this;
    }

    //尾插法
    void PushBack(const T &value) {
        if (this->capacity == this->size) {
            return;
        }
        this->pAddress[this->size] = value;
        this->size++;
    }

    //尾删法
    void PopBack() {
        //让用户访问不到最后一个元素，即为尾删，逻辑删除
        if (this->size == 0) {
            return;
        }
        this->size--;
    }

    //通过下标的方式访问
    T &operator[](int index) {
        return this->pAddress[index];
    }

    int getCapacity() {
        return this->capacity;
    }

    int getSize() {
        return this->size;
    }

private:
    T *pAddress;//指针指向堆区开辟的真实数组
    int capacity;//数组容量
    int size;//数组大小

};
