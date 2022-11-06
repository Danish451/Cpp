#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << numerator << " / " << denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        int j = min(numerator, denominator);
        for (int i = 1; i < +j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
                gcd = i;
        }
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
    void add(Fraction const &f2)    //to avoid making of a copy of f2 we pass it by reference
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);

        numerator = num;
        denominator = lcm;

        simplify();
    }

    void multiply(Fraction f2){
        int x = numerator * f2.numerator;
        int y = denominator * f2.denominator;

        numerator = x;
        denominator = y;

        simplify();
    }
};