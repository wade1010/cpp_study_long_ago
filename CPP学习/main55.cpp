#include "iostream"
#include "string"
#include "fstream"

using namespace std;
//读文件




void test1() {
//1包含头文件 fstream
//2创建流对象
    ifstream ifs;
//3打开文件文判断文件是否存在
    ifs.open("test1.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
//4读数据
//第一种
//    char buf[1024] = {0};
//    while (ifs >> buf) {
//        cout << buf << endl;
//        cout << "----" << endl;
//    }
//第二种
//    char buf[1024] = {0};
//    while (ifs.getline(buf, sizeof(buf))) {
//        cout << buf << endl;
//    }
    //第三种
//    string buf;
//    while (getline(ifs, buf)) {
//        cout << buf << endl;
//    }

    //第四种 不太建议使用
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }
//5关闭文件
    ifs.close();
}

int main() {
    test1();
    return 0;
}