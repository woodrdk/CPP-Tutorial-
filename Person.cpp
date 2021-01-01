#include "Person.h"
#include<sstream>

// tostring methos using a stringstream
string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;
	return ss.str();
}

// setter to set Name
void Person::setName(string newName) {
	name = newName;
}

// getter to get Name
string Person::getName() {
	return name;
}