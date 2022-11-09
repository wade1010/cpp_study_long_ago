#include "iostream"
#include "vector"
#include "deque"
#include "algorithm"

using namespace std;

class Person {
public:
    Person(string name, int score) {
        this->m_Name = name;
        this->m_Score = score;
    }

    int m_Score;
    string m_Name;
};

void createPerson(vector<Person> &vp) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++) {
        Person p("选手" + to_string(i + 1), 0);
        vp.push_back(p);
    }
}

void printInfo(vector<Person> &p) {
    for (vector<Person>::iterator it = p.begin(); it != p.end(); it++) {
        cout << "姓名：" << (*it).m_Name << " 平均分:" << (*it).m_Score << endl;
    }
}

void setScore(vector<Person> &p) {
    srand((unsigned int) time(NULL));
    for (vector<Person>::iterator it = p.begin(); it != p.end(); it++) {
        deque<int> d;
        cout << "选手：" << it->m_Name << "的打分：" << endl;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 41 + 60;
            d.push_back(score);
            cout << score << " ";
        }
        cout << endl;
        //排序
        sort(d.begin(), d.end());
        //去除最高和最低
        d.pop_back();
        d.pop_front();
        int sum = 0;
        for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++) {
            sum += *dit;
        }
        it->m_Score = sum / d.size();
    }
}

//评委打分
void test() {
//1创建5名选手
    vector<Person> v;
    createPerson(v);
    printInfo(v);
//2 给5名选手打分
    setScore(v);
    printInfo(v);

//3 显示最后得分
}

int main() {
    test();
    return 0;
}