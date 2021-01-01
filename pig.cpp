#include<iostream>
#include<time.h>
#include "pig.h"
using namespace std;


Pig::Pig() {
	cout << "Pig Created" << endl;
	happy = false;
}

Pig::~Pig() {
	cout << "Cat destroyed" << endl;
}


void Pig::speak() {
	if (happy) {
		cout << "OINK OINK!!!!" << endl;
	}
	else {
		cout << "grunt grunt!!!!" << endl;
	}
}

void Pig::eat() {
	cout << "BACON BACON BACON" << endl;
}

void Pig::makeHappy() {
	happy = true;
}

void Pig::makeSad() {
	happy = false;
}


void Pig::setColor() {
	srand((int)time(0));
	int pick = (rand() % 3) ;
	// cout << pick << endl;
	string colors[3] = { "black", "red", "green" };

	color = colors[pick];
	cout << color << endl;
	
}