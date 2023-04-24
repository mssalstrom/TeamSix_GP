#include "ClassRoom.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main() {
	ClassRoom class1("CSC - 134");
	class1.readAndCreateStudentArray("studentinfo.txt");
	class1.displayAllStudents();
	cout << "The average score of all students is : " << class1.calcStudentAvg() << endl;
	cout << "Total students in this class: " << class1.getNumStudent() << endl;




} // end main