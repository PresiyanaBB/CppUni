#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "first num: ";
    cin >> a;
    cout << "second num: ";
    cin >> b;

    if (a > b)
    {
        cout << "a/b = " << a / b << endl;
        cout << "a%b = " << (a % b);
    }

    else
    {
        cout << "a/b = " << b / a << endl;
        cout << "a%b = " << (b % a);
    }

    return 0;
}

/*�� �� ������ ��������, ����� ���� �� ��������� 2 ����� � ��������� �������� � �������� ��� ��������� ��.*/
