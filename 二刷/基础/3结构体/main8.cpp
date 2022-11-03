#include "iostream"

using namespace std;

struct Hero {
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero h[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (h[i].age > h[j].age) {
                struct Hero temp = h[i];
                h[i] = h[j];
                h[j] = temp;
            }
        }
    }
}

void printHero(struct Hero hArr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "姓名:" << hArr[i].name << " 年龄:" << hArr[i].age << " 性别:" << hArr[i].sex << endl;
    }
}

int main() {
    struct Hero hArr[5] = {
            {"刘备", 23, "男"},
            {"关羽", 22, "男"},
            {"赵云", 20, "男"},
            {"貂蝉", 21, "男"},
            {"貂蝉", 19, "女"},
    };
    int len = sizeof(hArr) / sizeof(hArr[0]);
    printHero(hArr, len);
    cout << endl;
    bubbleSort(hArr, len);
    printHero(hArr, len);
    return 0;
}