#include <iostream>
using namespace std;
class Stu
{
public:
    int age;
    int roll;

    //Destructor
    ~Stu(){
        cout << "Destructor Called !! " << endl;
    }

    //Default Constructor
    Stu(){
        cout << " Constructor 1 Called" << endl;
    }


    // Parameterized Constructor
    Stu(int a){
        cout << "Constructor 2 Called" << endl;
    }

    Stu(int age, int roll)
    {
        cout << "Constructor 3 Called" << endl;
        this->age = age;
        this->roll = roll;
    }
    void display()
    {
        cout << age << " " << roll << endl;
    }
};