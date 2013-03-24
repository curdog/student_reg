#include "student.hpp"


Student::Student(){
  ID = "";
  GPA = "";
  CreditsCompleted = "";
  QualityPoints = "";
}

int Student::getID() const{
  return ID;
}

float Student::getGPA() const{
  return GPA;
}

int Student::getCreditsCompleted() const{
  return CreditsCompleted;
}
