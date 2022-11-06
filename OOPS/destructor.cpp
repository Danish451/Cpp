#include <iostream>
using namespace std;
#include "ConstructorandDestructor.cpp"

int main()
{
    // same name as our class | No return type | No input arguments | called at last means when main function's scope is just about to complete.
    // use to dealloate the memory
    // when we create our destructor, default constructor not accessable to us.

    Stu s1(10, 1001);
    cout << "S1 : ";
    s1.display();

    Stu s2(20, 2002);
    cout << "S2 :";
    s2.display();

    // for dyanmic we ourself have to deallocate explicitly atlast by delete keyword then inly destructor called.
    Stu *s3 = new Stu(20, 2001);
    cout << "S3 : ";
    s3->display();

    delete s3;
    return 0;
}