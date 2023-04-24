#include "ClassRoom.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


ClassRoom::ClassRoom(string _name) {
	name = _name;
	numStudent = 0;
}

// getters and setters
string ClassRoom::getClassName() {
	return name;
}

void ClassRoom::setClassName(string _name) {
	name = _name;
}

Student* ClassRoom::getStudentArray() {
	return studentArray;
}

void ClassRoom::setStudentArray(Student _students[], int _numStudent) {
	numStudent = _numStudent;
	for (int i = 0; i < 4; i++) {
		studentArray[i] = _students[i];
	} // end for loop
} // end setStudentArray

double ClassRoom::calcStudentAvg() {
	// calc the average of the class
	double total = 0.0;
	for (int i = 0; i < numStudent; i++) {
		total += studentArray[i].calAverageScore(); // calls the calAverageScore function from student.cpp
	}
	return (total / numStudent); // returns the total of all the averages dived by the number of students (16)
} // end calcStudentAvg

void ClassRoom::readAndCreateStudentArray(string _fileName) {

	string fName, lName, social;
	double scores[4]; // wanted to create an array for scores might change later.

	ifstream inFile;
	inFile.open(_fileName);
	while (inFile >> lName >> fName >> social) {
		for (int i = 0; i < 4; i++) {
			inFile >> scores[i];
		} // end for loop for adding 4 scores to score array
		Student studentObject(lName, fName, social, scores); // creates a student object by reading student recrod from the data file
		studentArray[numStudent] = studentObject;
		ClassRoom::numStudent++;
	} // end while loop for reading file
	inFile.close();
} /// end readAndCreateStudentArray

void ClassRoom::displayAllStudents() {
	cout << setw(15) << left << "Last Name" << setw(15)
		<< left << "First Name" << setw(15) << left << "SSN";
	// for loop to display Score += 1
	for (int i = 0; i < 4; i++) {
		cout << setw(15) << right << "Score" << (i + 1);
	} // end score display for loop
	cout << setw(15) << right << "Average" << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl; // I wonder if I can do this with a for loop as well....

	for (int i = 0; i < numStudent; i++) {
		studentArray[i].displayStudent(); // calls the displayStudent function from Student.cpp
	} // end for loop
} // end displayAllStudents


int ClassRoom::getNumStudent() {
	return numStudent;
}