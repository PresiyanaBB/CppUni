#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    cout << "Please enter the length of the first side: ";
    cin >> a;
    cout << "Please enter the length of the second side: ";
    cin >> b;
    cout << "P: " << 2 * (a + b) << "\nS: " << a * b;
    return 0;
}

/*�������� ��������, ����� ������� ����������� �� ������ ��������� �� ����� ������ �� ������������,
���� �� ������� ���������, �������� "Please enter the length of the first side:".
���������� �� ������ ����������� � ������ �� ���� ������������.
�������� ���� �� �� �� ���� �����!*/
