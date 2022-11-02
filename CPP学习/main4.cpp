# include "iostream"

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c;
    c = a > b ? a : b;
    cout << c << endl;

    switch (c) {
        case 10:
            cout << "hello" << endl;
            break;
        case 20:
            cout << "he he" << endl;
            break;
        default:
            cout << "default" << endl;
            break;
    }


    while (c-- > 1) {
        cout << c << endl;
    }


    do {
        cout << c << endl;
    } while (c++ > 2);

    for (int i; i < 10; ++i) {
        cout << i << endl;
    }


    return 0;
}
