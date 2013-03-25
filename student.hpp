#ifndef _STUDENT_H
#define _STUDENT_H

#include "person.hpp"

/**
 class Student, inherits Person
 
 function:      int getID() const
 postcondition: returns int
 precondition:  none
 
 function:      float getGPA() const
 postcondition: returns float
 precondition:  none
 
 function:      int getCreditsCompleted() const
 postcondition: returns int
 precondition:  none
 
 function:      int getQualityPoints() const
 postcondition: returns int
 precondition:  none
 
 function:      void setID( int )
 postcondition: sets ID
 precondition:  none
 
 function:      void setCreditsCompleted( int )
 postcondition: sets CC
 precondition:  none 
 
 function:      void setQualityPoints( int )
 postcondition: sets QP
 precondition:  none
 
 **/

using namespace std;

class Student : public Person {
public:
  
	Student();
	void display();
	
  int   getID() const;
  float getGPA() const;
  int   getCreditsCompleted() const;
  int   getQualityPoints() const;

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
