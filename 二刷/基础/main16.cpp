#include "iostream"

using namespace std;

//����������
//�ȽϺ���,ʵ�������������ֽ��б꽺,���ؽϴ��ֵ

//��ǰ���߱����������Ĵ���,�������ú���������
int get_max(int a, int b);
//��������д���,���Ƕ���ֻ����һ��
int get_max(int a, int b);
int get_max(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    cout << get_max(a, b) << endl;
    return 0;
}

//����
int get_max(int a, int b)
{
    return a > b ? a : b;
}