#include <iostream>
using namespace std;

int main()
{
    double radius;
    const double Pi = 3.14159265;

    cout << "Radius: ";
    cin >> radius;
    cout << "P: " << 2 * radius * Pi;

    return 0;
}

/*
Да се напише програма, която:
А) Потребителят въвежда радиус на окръжност;
Б) Програмата изчислява дължината на окръжността;
В) Програмата изчислява лицето на окръжността при зададения радиус(PI = 3,14159265).*/
