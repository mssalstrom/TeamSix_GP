#ifndef CLASSROOM_H
#define CLASSROOM_H
#include "Student.h"
#include <string>

using namespace std;

class ClassRoom {
public:
	ClassRoom(string _name);
	string getClassName();
	void setClassName(string _name);
	double calcStudentAvg();
	void setStudentArray(Student _students[], int _numStudent);
	Student* getStudentArray();
	void readAndCreateStudentArray(string _fileName);
	void displayAllStudents();
	int getNumStudent();

private:
	string name;
	Student studentArray[16];
	int numStudent;
}; // end ClassRoom class

#endif