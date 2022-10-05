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

/*Напишете програма, която подканя потребителя да въведе дължините на двете страни на правоъгълник,
като му извежда съобщение, например "Please enter the length of the first side:".
Програмата да изведе периметърът и лицето на този правоъгълник.
Страните може да не са цели числа!*/
