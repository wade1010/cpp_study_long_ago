#include "iostream"

using namespace std;

//ֵ����
//���庯��,ʵ���������ֽ��н�������

//�����������Ҫ����ֵ,������ʱ�����дvoid

void swap(int num1, int num2)
{
    cout << "����ǰ:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "������:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    // return;����ֵvoid��ʱ����Բ�дreturn
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    cout << "����ǰ:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "������:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
