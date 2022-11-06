#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	int a, b;
	Student s1;

	Student *s2 = new Student;

	cout << "Enter age" << endl;
	cin >> a >> b;
	s1.setAge(a, 1230);
	s2 -> setAge(b, 1230);

	cout << "Enter roll Number" << endl;
	cin >> s1.rollNumber;
	cin >> s2 -> rollNumber;

	s1.display();
	s2 -> display();

	delete s2;

	return 0;
}

