#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;
class Student {
public:
	// constructors
	Student();
	Student(string _fName, string _lName, string _social, double _scores[4]);

	// setters and getters
	string getfName();
	void setfName(string _fName);

	string getlName();
	void setlName(string _lName);

	string getSocial();
	void setSocial(string _social);

	double* getScores();
	void setScores(double _scores[4]);

	// other functions
	double calAverageScore();
	void displayStudent();
	
private:
	string fName, lName, social;
	double scores[4];
	


}; // end student class

#endif