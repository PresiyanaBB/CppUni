#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Dividend: ";
    cin >> a;
    cout << "Divisor: ";
    cin >> b;

    if (a > b)
    {
        cout << "The quotient of the division is : " << a / b << endl;
        cout << "The remainder of the division is : " << (a % b);
    }

    else
    {
        cout << "The quotient of the division is : " << b / a << endl;
        cout << "The remainder of the division is : " << (b % a);
    }

    return 0;
}

/*�� �� ������ ��������, ����� ���� �� ��������� 2 ����� � ��������� �������� � �������� ��� ��������� ��.*/
