#include "student.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Student::Student(){
  ID  = 0;
  GPA = 0;
  CC  = 0;
  QP  = 0;
}

int Student::getID() const{
  return ID;
}

float Student::getGPA() const{
  return GPA;
}

int Student::getCreditsCompleted() const{
  return CC;
}

int Student::getQualityPoints() const {
	return QP;
}

void Student::setID( int i ){
	ID = i;
}

void Student::setCreditsCompleted( int i ){
	CC = i;
	GPA = calcGPA();
}

void Student::setQualityPoints( int i ){
	QP = i;
	GPA = calcGPA();
}

double Student::calcGPA(){
	if( CC == 0 ){
		return 0;
	}
	
	return (float)QP / (float)CC;

}

void Student::display(){
	
	cout << fixed << setprecision(2) << setw(10) << ID << setw(33) << getFirstName() << ", " << getLastName() << setw(10) << "GPA: " << GPA << "\n";
}