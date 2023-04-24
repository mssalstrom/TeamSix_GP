#include "Student.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



Student::Student() {
	fName = "";
	lName = "";
	social = "";
	// creates type array for scores
	for (int i = 0; i < 4; i++) {
		scores[i] = 0.0;
	}
}

Student::Student(string _fName, string _lName, string _social, double _scores[4]) {
	fName = _fName;
	lName = _lName;
	social = _social;
	for (int i = 0; i < 4; i++) {
		scores[i] = _scores[i];
	}
	
}

void Student::setfName(string _fName) {
	fName = _fName;
}

string Student::getfName() {
	return fName;
}


string Student::getlName() {
	return lName;
}

void Student::setlName(string _lName) {
	lName = _lName;
}

string Student::getSocial() {
	return social;
}

void Student::setSocial(string _social) {
	social = _social;
}

double* Student::getScores() {
	return scores;
}

void Student::setScores(double _scores[4]) {
	for (int i = 0; i < 4; i++) {
		scores[i] = _scores[i];
	}
}

double Student::calAverageScore() {
	// get total scores of all test and divide by 4 to return the average
	double total = 0.0;
	for (int i = 0; i < 4; i++) {
		total += scores[i];
	}
	return total / 4;
}

void Student::displayStudent() {
	cout << setw(15) << left << lName << setw(15) << left << fName << setw(15) << left << social;
	for (int i = 0; i < 4; i++) {
		cout << setw(15) << right << scores[i];
	}
	cout << setw(15) << right << calAverageScore() << endl;
}

