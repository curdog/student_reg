#ifndef _STUDENT_H
#define _STUDENT_H

#include "person.hpp"

class Student : public Person {
public:
  //max
  int getID() const;
  float getGPA() const;
  int getCreditsCompleted() const;
  int getQualityPoints() const;
  //shane
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
