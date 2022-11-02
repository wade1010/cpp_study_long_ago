#include "string"
#include "iostream"
#include "vector"
#include "deque"
#include "algorithm"

using namespace std;

/*
 *STL案例 评委打分
 *
 */

class Person {
public:
    Person(string n, int s) {
        name = n;
        score = s;
    }

    string name;
    int score;

};

void createPerson(vector<Person> &v) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++) {
        string name = "选手";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}

void setScore(vector<Person> &v) {
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 41 + 60;//60~100
            d.push_back(score);
        }
        cout << "选手：" << it->name << "打分" << endl;
        for (deque<int>::iterator sit = d.begin(); sit != d.end(); sit++) {
            cout << *sit << " ";
        }
        cout << endl;
        //排序
        sort(d.begin(), d.end());
        //去除最低分和最高分
        d.pop_back();
        d.pop_front();
        //取平均分
        int sum = 0;
        for (deque<int>::iterator it2 = d.begin(); it2 != d.end(); it2++) {
            sum = *it2;
        }
        int avg = sum / d.size();
        //将平均分 赋值给选手
        it->score = avg;
    }
}

void printVector(vector<Person> &v) {
    for (vector<Person>::iterator i = v.begin(); i != v.end(); i++) {
        cout << (*i).name << ":" << (*i).score << " ";
    }
    cout << endl;
}

void test() {
//1 创建5名选手
    vector<Person> v;
    createPerson(v);
    printVector(v);

//2 给5名选手打分
    setScore(v);

//3 显示最后得分
    printVector(v);
}

int main() {
    //随机数种子
    srand((unsigned int) time(NULL));
    test();
    return 0;
}