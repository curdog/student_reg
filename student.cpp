#include "student.hpp"
#include <iostream>

using namespace std;

Student::Student(){
  ID = 0;
  GPA = 0;
  CC = 0;
  QP = 0;
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
	
	return QP / CC;

}

void Student::display(){
	//cout << setw(2);
	cout << ID << " " << getFirstName() << ", " << getLastName() << getAddress() << "GPA: " << GPA << " Completed: " << CC << " QP: " << QP << "\n";
}