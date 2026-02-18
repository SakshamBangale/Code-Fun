#include <iostream>
using namespace std;

int main()
{
    // -------- DO WHILE --------
    int i1{5}, factorial1{1};

    do
    {
        factorial1 *= i1;
        i1--;
    } while (i1 >= 1);

    cout << "Do While Factorial: " << factorial1 << endl;


    // -------- WHILE --------
    int i2 = 5;
    int factorial2 = 1;

    while (i2 >= 1)
    {
        factorial2 *= i2;
        i2--;
    }

    cout << "While Factorial: " << factorial2 << endl;


    // -------- FOR --------
    int factorial3{1};

    for (int i = 1; i <= 5; i++)
    {
        factorial3 *= i;
    }

    cout << "For Loop Factorial: " << factorial3 << endl;
}
