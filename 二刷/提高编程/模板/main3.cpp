#include "iostream"

using namespace std;
template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[maxIndex] < arr[j])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            T temp = arr[maxIndex];
            arr[maxIndex] = arr[i];
            arr[i] = temp;
        }
    }
}
template <class T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void test1()
{
    int arr[] = {32, 3243, 45, 564, 657, 23, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    mySort(arr, len);
    printArray(arr, len);
}
void test2()
{
    char arr[] = "qwefrhsb";
    int len = sizeof(arr) / sizeof(arr[0]);
    mySort(arr, len);
    printArray(arr, len);
}
int main()
{
    test1();
    test2();
    return 0;
}