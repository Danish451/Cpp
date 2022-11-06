#include <iostream>
using namespace std;
#include "fraction.cpp"

int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    cout << "Fraction F1 : ";
    f1.print();
    cout << "Fraction F2 : ";
    f2.print();

   /* f1.add(f2);

    cout << "Addition of F1 and F2 is : ";
    f1.print();
*/

    f1.multiply(f2);
    cout << "Product of F1 and F2 is : ";
    f1.print();
    return 0;
}