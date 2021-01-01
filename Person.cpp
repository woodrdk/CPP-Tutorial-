#include "Person.h"
#include<sstream>
Person::Person() {
	name = "undefined";
	age = 0;
}

//Person::Person(string newName) {
//	name = newName;
//	age = 0;
//}
Person::Person(string newName, int newAge) {
	this->name = newName;
	// name = newName;
	this->age = newAge;
	// age = newAge;
	cout << "Memory location of object: " << this << endl;
}

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