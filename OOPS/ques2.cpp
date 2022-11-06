/*#include <iostream>
using namespace std;
#include <cstring>

class Student{
    public :
    char *name;
    int rollNo;

    // Constructor 1
    Student(int num){
        rollNo = num;
        name = new char[10];
        strcpy(name, "abc");
    }

    // Constructor 2
    Student(int num, char *str){
        rollNo = num;
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }

    void print(){
        cout << name << " "  <<  rollNo << " ";
    }
};

int main() {
    Student s1(101);
    s1.print();
    char str[] ="xyz";
    Student *s2 = new Student(150, str);
    s2 -> print();
}*/
/*
#include <iostream>
using namespace std;

class Student{
    public :
        char *name;
        int rollNo;

        void print(){
            cout << name << " "  <<  rollNo << " ";
        }
};

int main() {
    char name[] = "Misha";
    Student s1;
    s1.name = name;
    s1.rollNo = 101;

    name[0] = 'N';
    Student s2;
    s2.name = name;
    s2.rollNo = 102;

    s1.print();
    s2.print();
}*/
#include<iostream>
using namespace std;
class Student {
    public :

    int rollNumber;
    int age;

};


int main() {
    Student s1;

    Student const s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s2.rollNumber << " " << s2.age;
}
