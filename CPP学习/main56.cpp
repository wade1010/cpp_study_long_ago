#include "iostream"
#include "string"
#include "fstream"

using namespace std;
//二进制文件操作

class Person {
public:
    char name[64];
    int age;
};

//二进制文件写文件
void test1() {
    /*
     * 1 包含头文件
     * 2 创建流对象
     * 3 打开文件
     * 4 写入数据
     * 5 关闭文件
     */
//    ofstream ofs();
//    ofs.open("person.txt", ios::out | ios::binary);
    ofstream ofs("person.txt", ios::out | ios::binary);

    Person p = {"bob", 18};
    ofs.write((const char *) &p, sizeof(Person));
    ofs.close();
}

//二进制文件读文件
void test2() {
    ifstream ifs("person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "打开文件失败" << endl;
        return;
    }
    Person p;
    ifs.read((char *) &p, sizeof(Person));
    cout << p.name << "  " << p.age << endl;
    ifs.close();
}

int main() {
//    test1();
    test2();
    return 0;
}