#include "iostream"

using namespace std;

struct Student {
    string name;
    int score;
};
struct Teacher {
    string name;
    struct Student students[5];
};


void allocateSpace(Teacher pTeacher[], int len) {
//给老师开始赋值
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++) {
        pTeacher[i].name = "Teacher_";
        pTeacher[i].name += nameSeed[i];
        //通过循环给每名老师所带的学生赋值
        for (int j = 0; j < 5; j++) {
            int randScore = rand() % 61 + 40;
            pTeacher[i].students[j] = {"学生", randScore};
            pTeacher[i].students[j].name += nameSeed[j];
        }
    }
}

void printInfo(Teacher ts[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "老师姓名：" << ts[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t学生姓名：" << ts[i].students[j].name << " 分数：" << ts[i].students[j].score << endl;
        }
    }
}

int main() {
    //随机数终止
    srand(time(NULL));
    struct Teacher teachers[3];

    int len = sizeof(teachers) / sizeof(teachers[0]);
    allocateSpace(teachers, len);
    printInfo(teachers, len);
    return 0;
}

