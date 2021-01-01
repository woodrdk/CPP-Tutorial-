#pragma once

#include <iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
public:
	Person() :name("unamed"), age(0) {};
	Person(string newName) : name(newName), age(0) {};
	Person(string newName, int newAge) : name(newName), age(newAge) {};
	string toString();
	void setName(string newName);
	string getName();
};

