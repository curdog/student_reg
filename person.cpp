#include "person.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

Person::Person(){
  firstName = "Tyler";
  lastName = "Durden";
  address = "420 Paper St";
}

string Person::getFirstName() const{
  return firstName;
}

string Person::getLastName() const{
  return lastName;
}

string Person::getAddress() const{
  return address;
}

void Person::setFirstName( const string& s ){
  if( s.length() > 15 )
    return;

  firstName = s;
}

void Person::setLastName( const string& s ){
  lastName = s;
}

void Person::setAddress( const string& s){

  address = s;
}

void Person::display(){
	cout << firstName << ", " << lastName << setw(15) << address << "\n";
}