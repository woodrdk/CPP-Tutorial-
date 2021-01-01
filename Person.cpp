#include "Person.h"
#include<sstream>




string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;
	return ss.str();
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}