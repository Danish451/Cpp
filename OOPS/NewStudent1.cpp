#include <iostream>
using namespace std;

class Student {

	public :

	int rollNumber;
	
	private :

	int age;


	public :

    //Their is an inbuilt constructor. When we make a constructor then this inbuilt was vanished and we only left with our constructor. 

	// Default constructor
	Student() {
		cout << "Constructor called ! "<< endl;
	}

	// Parameterized constructor
	Student(int rollNumber) {
		cout << "Constructor 2 called !" << endl;

        //this: it hold the address of current object. It is nothing but a pointer.
        // here it holds of student s2
		this -> rollNumber = rollNumber;
	}

	Student(int a, int r) {
        // here it hold of student s1
		cout << "this : " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		this -> age = a;
		this -> rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a, int password) {
		if(password != 123) {
			return;
		}
		if(a < 0) {
			return;
		}
		age = a;
	}

};

