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

/*Напишете програма, която взима две числа от стандартния вход и извежда true ако първото е по - малко от второто и false в противен случай.*/
