#include "person.hpp"


Person::Person(){
  firstName = "";
  lastName = "";
  address = "";
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
