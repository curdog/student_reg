#ifndef _PERSON_H
#define _PERSON_H
#include <string>


//sean
class Person {
public:
  Person();
  char* getFirstName();
  char* getLastName();
  char* getAddress();
  
  void setFirstName(char*);
  void setLastName(char*);
  void setAddress(char*);
  
private:
  char* firstName;
  char* lastName;
  char* address;
};

#endif
