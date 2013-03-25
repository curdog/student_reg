#ifndef _PERSON_H
#define _PERSON_H
#include <string>

using namespace std;

//sean
class Person {
public:
  Person();
	void display();
	
  string getFirstName() const;
  string getLastName() const;
  string getAddress() const;
  
  void setFirstName(const string&);
  void setLastName(const string&);
  void setAddress(const string&);
  
private:
  string firstName;
  string lastName;
  string address;
};

#endif
