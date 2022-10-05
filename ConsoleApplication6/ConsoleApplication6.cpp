#include <iostream>
using namespace std;

int main()
{
    int divident;
    int divisor;

    cout << "Dividend: ";
    cin >> divident;
    cout << "Divisor: ";
    cin >> divisor;

    cout << "The quotient of the division is : " << divident / divisor << endl;
    cout << "The remainder of the division is : " << (divident % divisor);

    return 0;
}

/*
Dividend: 25
Divisor: 3
Изход:

The quotient of the division is : 8
The remainder of the division is : 1*/
