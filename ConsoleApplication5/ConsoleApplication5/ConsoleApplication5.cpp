#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;

    cout << "first num: ";
    cin >> a;
    cout << "second num: ";
    cin >> b;

    cout << boolalpha << (a < b);

    return 0;
}

/*�������� ��������, ����� ����� ��� ����� �� ����������� ���� � ������� true ��� ������� � �� - ����� �� ������� � false � �������� ������.*/
