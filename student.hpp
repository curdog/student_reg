#ifndef _STUDENT_H
#define _STUDENT_H

#include "person.hpp"

using namespace std;

class Student : public Person {
public:
  
	Student();
	void display();
	
  int getID() const;
  float getGPA() const;
  int getCreditsCompleted() const;
  int getQualityPoints() const;

  void setID( int );
  void setCreditsCompleted( int );
  void setQualityPoints( int );
  
private:
	double calcGPA();
  int ID;
  double GPA;
  int CC;
  int QP;
};
#endif
