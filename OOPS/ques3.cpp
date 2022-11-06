#include<iostream>
using namespace std;
/*class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}*/
/*
class Student {
    public :

    int rollNumber;
    static int totalStudents;
};

int Student::totalStudents = 20;

int main() {
    Student s;
    
    //Student :: totalStudents;
    // Correct statement to access totalStudents
}*/
/*
class Student {
    public :

    int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
}
*/

class Student {
    public :

    int rollNumber;
    static int totalStudents;

    Student() {
        totalStudents++;
    }
};

int Student::totalStudents = 20;

int main() {
    Student s1, s2, s3, s4;
    cout << Student :: totalStudents;
}