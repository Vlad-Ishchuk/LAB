#include <iostream>
using namespace std;
int main(void)
{
    int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
    cout << "Array a\n";
    for (int i = 0; i < 10; i++)
        cout << a[i] << endl;
    int* p1, * p2;
    p1 = &a[0];
    p2 = &a[9];
    for (; p1 < p2; p1++, p2--)//��������� �������� �������� ���� ������ 
    {
        int d = *p1;//������� ��������� �������� ����� - d
        *p1 = *p2; *p2 = d;//���� ���������� ��������
    }
    cout << "Inverse array a'\n";
    for (p1 = &a[0]; p1 < &a[10]; p1++)
        cout << *p1 << endl;
    return 0;  
}