#include <iostream>
using namespace std;
#include "ConstructorandDestructor.cpp"
int main()
{

    Stu s1(10, 1001);
    cout << "S1 :";
    s1.display();

    // only one time our constructor called so sirf 1 baar print hua constructor
    // s2 ke lye inbuilt copy constructor called hua hai that's why usme print nhi hua!!

    // Copy Constructor called only once in the life of an object i.e., at the time of object creation
    Stu s2(s1);
    cout << "S2 :";
    s2.display();

    // dynamically

    Stu *s3 = new Stu(20, 2001);
    cout << "S3 : ";
    s3->display();

    Stu s4(*s3);
    cout << "S4 : ";
    s4.display();

    // dynamic copy
    Stu *s5 = new Stu(*s3);
    Stu *s6 = new Stu(s2);
    return 0;
}