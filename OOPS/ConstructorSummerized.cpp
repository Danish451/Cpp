#include <iostream>
using namespace std;
#include "ConstructorandDestructor.cpp"

int main()
{

    Stu s1; // default Constructor 1 called

    Stu s2(25); // Constructor 2 called

    Stu s3(24, 2000); // Constructor 3 called

    Stu s4(s3); // Copy Constructor called

    s1 = s2; // Copy assignment operator

    // since s5 is not allocated any memory so by default copy constructor called and copy value of s3 to s5
    Stu s5 = s3; // Copy Constructor called

    return 0;
}