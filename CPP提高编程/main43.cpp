#include <iostream>
#include <map>

using namespace std;

/*
 *map
 */
void printMap(map<int, int> &m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

void test() {
    map<int, int> m;
    m.insert(make_pair(1, 1));
    cout << m[1] << endl;
    cout << m[2] << endl;
    cout << endl;
    printMap(m);
    unsigned long i = m.erase(10);
    cout << i << endl;
}

int main() {
    test();
    return 0;
}