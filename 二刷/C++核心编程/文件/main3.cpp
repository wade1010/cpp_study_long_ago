#include "iostream"
#include "fstream"

using namespace std;

class Person {
public:
    string m_Name;
    int m_Age;
};

void write() {
//    ofstream ofs;
//    ofs.open("test.txt", ios::out | ios::binary);
    //上面两步，可以合成一步
    ofstream ofs("test.txt", ios::out | ios::binary);
    if (ofs.fail()) {
        cout << "失败" << endl;
        return;
    }
    Person p = {"张三", 18};

    ofs.write((const char *) &p, sizeof(Person));

    ofs.close();
}

void read() {
    ifstream ifs("test.txt", ios::in | ios::binary);
    if (ifs.fail()) {
        cout << "文件打开失败" << endl;
        return;
    }
    Person p;
    ifs.read((char *) &p, sizeof(Person));
    cout << "姓名:" << p.m_Name << " 年龄：" << p.m_Age << endl;
}

int main() {
    write();
    read();
    return 0;
}