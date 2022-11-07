#include "iostream"
#include "fstream"

using namespace std;

//读文件
int main() {
    //1 包含头文件  #include "fstream"
    //2 创建流对象
    ifstream ifs;
    //3 打开文件并判断是否正确打开
    ifs.open("test.txt", ios::in);
    if (ifs.fail()) {
        cout << "文件打开失败" << endl;
        return 0;
    }
    //4 读数据
    //第一种方式  这种方式buf的长度可能不够长，会报错
//    char buf[1024];
//    while (ifs >> buf) {
//        cout << buf << endl;
//    }
    //第二种方式 这种方式buf的长度可能不够长，不会报错，但是没有输出
    /*
     *比如文件内容如下：
1
性别：男
姓名：张三
分数：100
    char buf[1]；不会输出人和内容
     char buf[2]，会输 1  应该是C风格的\0结尾，占一个字节
      char buf[15];的时候 会输出 1 和 性别：男，因为 姓名：张三+\0不满足所以跳出while循环
     * */
//    char buf[1024];
//    while (ifs.getline(buf, sizeof(buf))) {
//        cout << buf << endl;
//    }
    //第三种方式
    string buf;
    while (getline(ifs, buf)) {
        cout << buf << endl;
    }

    //第四种方式 不推荐  一个个去读，效率不高
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c << endl;
    }
    return 0;
}