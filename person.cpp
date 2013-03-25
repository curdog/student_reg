#include "person.hpp"
#include <string>
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
  firstName = capLength(s, 15);
}

void Person::setLastName( const string& s ){
  lastName = capLength(s, 15);
}

void Person::setAddress( const string& s){

  address = capLength(s, 20);
}

void Person::display(){
	cout << firstName << ", " << lastName << setw(15) << address << "\n";
}

string Person::capLength( const string& s, int len ) const{
	if (s.length() > 16) {
		cerr << "Warning: Capping string length\n";
	}
	return s.substr( 0, len );	
}