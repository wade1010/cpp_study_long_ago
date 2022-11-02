#include "iostream"
#include "string"
#include "fstream"

using namespace std;
//对文件进行操作

//ofstream 写操作
//ifstream 读操作
//fstream 读写操作

void test1() {
    //1包含头文件 fstream
    //2创建流对象
    ofstream ofs;
    //3指定打开方式
    ofs.open("test1.txt", ios::out);
    //4写内容
    ofs << "姓名：bob" << endl;
    ofs << "性别：男" << endl;
    //5关闭文件
    ofs.close();
}

int main() {
    test1();
    return 0;
}