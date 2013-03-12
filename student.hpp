#ifndef _STUDENT_H
#define _STUDENT_H

#include "person.hpp"

class Student : public Person {
public:
  int getID();
  float getGPA();
  int getCreditsCompleted();
  int getQualityPoints();
  
  void setID( int );
  void setGPA( float );
  void setCreditsCompleted( int );
  void setQualityPoints( int );
  
private:
  int ID;
  double GPA;
  int CC;
  int QP;
}
#endif