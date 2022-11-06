#include <iostream>
using namespace std;
#include "ConstructorandDestructor.cpp"

int main()
{

    // copy constructor only copy at the time of creation only.
    // but if we want to get copyied value of s1 to s2 now then we use copy assignment operator

    Stu s1(10, 1001);

    cout << "S1 : ";
    s1.display();

    Stu s2(20, 2001);

    // Copy assignment operator works when there is already memory created for that object.
    // means when there is already some assigned value to object

    s2 = s1;

    cout << "S2 : ";
    s2.display();

    // dynamically

    Stu *s3 = new Stu(30, 3002);

    cout << "S3 : ";
    s3->display();

    // after copy operator

    *s3 = s1;
    cout << endl;
    cout << "NEW S3 : ";
    s3->display();
}