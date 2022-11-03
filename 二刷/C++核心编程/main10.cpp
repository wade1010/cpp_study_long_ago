#include "iostream"

using namespace std;
const double PI = 3.14;

class Circle {
public:
    double m_r;

    double calculateZC() {
        return 2 * PI * m_r;
    }
};

int main() {
    Circle c;
    c.m_r = 10;
    double zc = c.calculateZC();
    cout << "周长=" << zc << endl;
    return 0;
}