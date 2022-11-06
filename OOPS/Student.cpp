#include<iostream>
using namespace std;
class Student {

	int age;
	public :
	
	int rollNumber;

	void display(){				
		cout << "Age: " << age << " and Roll Number " << rollNumber << endl;
	}

	int getAge(){					//getter function
		return age;
	}
	void setAge(int a, int password){		//setter function		
		if(password != 1230)
		return;

		if(a<0)
		return;
		
		age = a;
	}
};


