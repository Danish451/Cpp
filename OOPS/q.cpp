#include<iostream>
using namespace std;

class Student{
	int roll;
	string name;
//	int sem;
	
	public :
		void getdata();
		void putdata();
		
};

void Student :: getdata(){
	cout << "Enter roll no: ";
	cin >> roll;
	
	cout << "Enter name: ";
	cin.ignore();
	getline(cin, name);
	
	/*cout << "Semester: ";
	cin >> sem;
	*/
}

void Student :: putdata(){
	cout << "Roll No: " << roll << endl;
	cout << "Name: " << name << endl;
//	cout << "Semester: " << sem << endl;	
}

int main(){
	Student s[5];
	
	for(int i=0; i<5; i++){
		cout << " Student " << i+1 << endl;
		s[i].getdata();
	}
	
	for(int i=0; i<5; i++){
		cout << " Student " << i+1;
		s[i].putdata();
	}
	return 0;
}
