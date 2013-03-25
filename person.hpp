#ifndef _PERSON_H
#define _PERSON_H
#include <string>

/**
 class Person
 
 function:      string getFirstName() const
 postcondition: returns string
 precondition:  none
 
 function:      string getLastName() const
 postcondition: returns string
 precondition:  none
 
 function:      string getAddress() const
 postcondition: returns string
 precondition:  none
 
 function:      void setFirstName( const string& )
 postcondition: sets FirstName, cap at 15 chars
 precondition:  valid string arg
 
 function:      void setLastName( const string& )
 postcondition: sets LastName, cap at 15 chars
 precondition:  valid string arg
 
 function:      void setAddress( const string& )
 postcondition: sets Address, cap at 20 chars
 precondition:  valid string arg
 
 function:      capLenth( const string&, int )
 postcondition: returns string with cap at int chars
 preconditon:   valid args
 
 **/

using namespace std;


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
	
protected:
	string capLength(const string&, int ) const;

private:
  string firstName;
  string lastName;
  string address;
};

#endif
