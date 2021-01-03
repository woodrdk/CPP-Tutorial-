
#include <iostream>
#include <limits>
#include <iomanip>

#include "Cat.h"
#include "Dog.h"
#include "Pig.h"
#include "Person.h"
#include<sstream>
using namespace std;


// show menu code 
void showMenu() {
    cout << "1.\tAdd new record." << endl;
    cout << "2.\tDelete record" << endl;
    cout << "3.\tView record" << endl;
    cout << "4.\tSearch record" << endl;
    cout << "5.\tQuit" << endl;
}
// code to process the selection picked
void processSelection() {
    cout << "Enter your selection >" << flush;
    int value;
    cin >> value;
    
    if (value == 1) {
        cout << "Adding new record..." << endl;
    }
    else if (value == 2) {
        cout << "Deleting record..." << endl;
    }
    else if (value == 3) {
        cout << "Viewing..." << endl;
    }
    else if (value == 4) {
        cout << "Searching..." << endl;
    }
    else if (value == 5) {
        cout << "Quitting..." << endl;
    }
    else {
        cout << "Invalid option" << endl;
    }
}

// animal class
class Animal {
public:
    void speak() {
        cout << "Grrr" << endl;
    }
};

// eagle class that inherits from animal
class Eagle :public Animal {
public:
    void fly() {
        cout << "Eagle soaring high!" << endl;
    }
};

// frog class
class Frog {
private: 
    string name;
private:
    string getName() { return name; }
public:
    Frog(string name) : name(name) {}
    void info() { cout << "My name is: " << getName() << endl; }
};

// machine class
class Machine {
private:
    int id;
public:
    Machine():id(0) { cout << "Machine no-argument constructor called" << endl; }
    Machine(int id):id(id) { cout << "Machine parameterized constructor called" << endl; }
    void info() { cout << "ID: " << id << endl; }
};

// vehicle class that inherits machine
class Vehicle: public Machine {
public:
    Vehicle() { cout << "Vehicle no-argument constructor called" << endl; }
    Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor called" << endl; }

};
 
// car class that inherits vehicle
class Car : public Vehicle {
public:
    Car() { cout << "Car no-argument constructor called" << endl; }
};


// .h header file
class Test {
private:
    int id;
    static int count;
    
public:
    // initialization of const must be done here
    static int const MAX = 99;
    static void showInfo() {
        cout << count << endl;
    }
    int getId() {
        return id;
    }
    Test() {
        id = count++;
    }
};

// .cpp source
int Test::count = 0;


void manipulate(double *pValue) {
    cout << "2. Value of double in manipulate: " << pValue << endl;
    *pValue = 10.0;
    cout << "3. Value of double in manipulate: " << pValue << endl;
}

void changeSomething(double &value) {
    value = 123.4;
}
int main()
{

    int value1 = 8;
    int &value2 = value1;
    value2 = 10;
    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;
    double value = 4.321;
    changeSomething(value);
    cout << value << endl;



    //char bigText[] = "supercalifragilisticexpialidocious";
    //cout << bigText << endl;

    //for (int j = 0; j < sizeof(bigText); j++) {
    //    cout << bigText[j] << flush;
    //    if (j == sizeof(bigText)-1) {
    //        cout << endl << "Looped text result is done!" << endl;
    //    }
    //}
    //int z = 0;
    //while (true) {
    //    if (bigText[z] == 0) {
    //        break;
    //    }
    //    cout << bigText[z] << flush;
    //    z++;
    //}
    //cout << endl << "End of while loop" << endl;

    //cout << endl << endl;
    //char text[] = "hello";
    //for (int i = 0; i < sizeof(text); i++) {
    //    cout << i << ": " << text[i] << endl; // if cast text[i] to int prints the 0 to show string end 
    //}
    //// cout << text << endl;

    //int k = 0;
    //while (true) {
    //    if (text[k] == 0) {
    //        break;
    //    }

    //    cout << text[k] << flush;
    //    k++;
    //}


    //char text[] = "hello";
    //int nChars = sizeof(text)-1;
    //char* pStart = text;
    //char* pEnd = text + nChars-1;
    //while (pStart < pEnd) {
    //    char save = *pStart;
    //    *pStart = *pEnd;
    //    *pEnd = save;
    //    pStart++;
    //    pEnd--;
    //}

    //cout << text << endl;



    //int count = 0;
    //for (int i = 0; i <= 10000; i++) {
    //    if (i > 0 && i % 100 == 0) {
    //        cout << "." << flush;
    //        count++;
    //    }
    //}
    //cout << endl << count << endl << endl;
    //double value1 = (double)7 / 2;
    //cout << value1 << endl;
    //int value2 = (int)7.3;
    //cout << value2 << endl;

    //int value3 = 8;
    //value3 += 1; // equals 8 + 1
    //cout << value3 << endl;

    //int value4 = 10;
    //value4 /= 5;
    //cout << value4 << endl;

    //int value5 = 12 % 5;
    //cout << value5 << endl;

    //double equation = 5.3 / 4 + 2 * 6;
    //cout << equation << endl;


    //int nValue = 8;
    //int* pnValue = &nValue; // or int *pnValue

    ////nValue = 9;
    //cout << "Int value: " << nValue << endl;
    //cout << "Pointer to int address: " << pnValue << endl;
    //cout << "Int value via pointer: " << *pnValue << endl;

    //cout << "===========================" << endl;
    //double dValue = 123.4;
    //cout << "1. dValue: " << dValue << endl;
    //manipulate(&dValue);
    //cout << "4. dValue: " << dValue << endl;




    //Test::showInfo();
    //cout << Test::MAX << endl;
    //Test test1;
    //cout << test1.getId();
    //cout << endl << "^^ Test id ^^" << endl;
    //Test::showInfo();

    //Test test2;
    //cout << test2.getId();
    //cout << endl <<  "^^ Test id ^^" << endl;
    //Test::showInfo();
    //cout << Test::count << endl;
    //Test::count++;
    //cout << Test::count << endl;

    ////twos complement clip
    //char value = 127;
    //cout << (int)value << endl;
    //value++;
    //cout << (int)value << endl;

    //cout << "This section of code was for section" << endl;
    //Machine machine;
    //Vehicle vehicle;
    //vehicle.info();
    //Car car;
    //car.info();
    //Vehicle veh2(69);
    //veh2.info();
    //Machine machine2(123);
    //machine2.info();

    // cout << "This section of code was for section" << endl;
    //Frog frog("Freddy");
    //frog.info();

    //Animal a;
    //a.speak();
    //Eagle e;
    //e.speak();
    //e.fly();

    // cout << "This section of code was for section" << endl;
    /*Person person1;
    cout << person1.toString() << endl;
    Person person2("BOB");
    cout << person2.toString() << endl;

    Person person3("Sue", 39);
    cout << person3.toString() << endl;*/

   // cout << "This section of code was for section" << endl;
    //string name = "Rob";
    //int age = 38;
    //stringstream ss;
    //ss << "Name is: ";
    //ss << name;
    //ss << "; Age is: ";
    //ss << age;
    //string info = ss.str();
    //cout << ss.str() << endl; // stream
    //cout << info << endl; // string

    //Person person;
    //person.setName("Draven");
    //cout<< person.getName() << endl; 
    //cout << person.toString() << endl;
  //  cout << "This section of code was for section" << endl;
    //{
    //    Pig bacon;
    //    bacon.makeHappy();
    //    bacon.speak();
    //    bacon.setColor();
    //}

    //Pig porkchop;
    //porkchop.makeSad();
    //porkchop.speak();
    //porkchop.setColor();

    //Cat cat1;
    //cat1.speak();
    //cat1.jump();
    //Dog dog1;
    //dog1.run();
    //dog1.speak();
    //Pig pig1;
    //pig1.eat();
    //pig1.speak();
   // cout << "This section of code was for the functions section" << endl;
   // showMenu();
   // processSelection();

    //int value = 4;
    //switch (value) {
    //case 4:
    //    cout << "Value is 4." << endl;
    //    break;
    //
    //case 5:
    //    cout << "Value is 5." << endl;
    //    break;
    //
    //case 6:
    //    cout << "Value is 6." << endl;
    //    break;
    //
    //default:
    //    cout << "Unrecognized value" << endl;
    //}
    //string animals[][3] = {
    //    {"fox", "dog", "cat"},
    //    {"moose", "squirrel", "parrot"}
    //};
    //for (unsigned int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
    //    for (unsigned int j = 0; j < sizeof(animals[0])/sizeof(string); j++) {
    //        cout << animals[i][j] << " " << flush;
    //    }
    //}


    //int values[] = { 4,7,3,4 };
    //cout << sizeof(values) << endl;
    //cout << sizeof(int) << endl;

    //for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++) {
    //    cout << values[i] << " " << flush;
    //}
    //cout << endl;


    //string animals[][3] = {
    //    {"fox", "dog", "cat"},
    //    {"moose", "squirrel", "parrot"}
    //};
    //for (int i = 0; i < 2; i++) {
    //    for (int j = 0; j < 3; j++) {
    //        cout << animals[i][j] << " " << flush;
    //    }
    //}

    //cout << "Array of integers" << endl;
    //cout << "=================" << endl;
    //int values[3];
    //values[0] = 88;
    //values[1] = 123;
    //values[2] = 7;

    //cout << values[0] << endl;
    //cout << values[1] << endl;
    //cout << values[2] << endl;

    //cout << endl << "Array of doubles" << endl;
    //cout << "=================" << endl;
    //double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };
    //for (int i = 0; i < 4; i++) {
    //    cout << "Elements at index " << i << ": " << numbers[i] << endl;
    //}
    //cout << endl << "Initializing with zero values" << endl;
    //cout << "=================" << endl;
    //int numberArray[8] = {};
    //for (int i = 0; i < 8; i++) {
    //    cout << "Element at index " << i << ": " << numberArray[i] << endl;
    //}
    //string texts[] = { "Apple", "Banana", "Orange" };
    //for (int i = 0; i < 3; i++) {
    //    cout << "Element at index " << i << ": " << texts[i] << endl;
    //}
    //const string password = "hello";
    //string input;
    //do {
    //    cout << "Enter your password > " << flush;
    //    cin >> input;
    //    if (input == password) {
    //        break;
    //    }
    //    else {
    //        cout << "Access denied" << endl;
    //    }
    //} while (true);
    //cout << "Password accepted" << endl;
    //cout << "Program quitting" << endl;



   /* for (int i = 0; i < 10; i++) {
        cout << "Hello " << i << endl;
    }*/

    /*const string password = "hello";
    string input;
    do {
        cout << "Enter your password > " << flush;
        cin >> input;
        if (input != password) {
            cout << "Access denied." << endl;
        }
    } while (input != password);
    cout << "Password accepted" << endl;*/


  /*  int i = 0;
    while (i < 5) {
        cout << "Hello " << i << endl;
        i++;
    }
    cout << "Programming quitting" << endl;*/

    //int value1 = 7;
    //int value2 = 4;

    //if (value1 >= 5) {
    //    cout << "Condition 1: true" << endl;
    //}
    //else {
    //    cout << "Condition 1: false" << endl;
    //}
    //if (value1 == 7 && value2 < 3) {
    //    cout << "Condition 2: true" << endl;
    //}
    //else {
    //    cout << "Condition 2: false" << endl;
    //}
    //if (value1 == 7 ||value2 < 3) {
    //    cout << "Condition 3: true" << endl;
    //}
    //else {
    //    cout << "Condition 3: false" << endl;
    //}
    //if (value2 != 8 && value1 == 10 || value1 < 10) {
    //    cout << "Condition 4: true" << endl;
    //}
    //else {
    //    cout << "Condition 4: false" << endl;
    //}

    //bool condition1 = (value2 != 8) && (value1 == 10);
    //bool condition2 = value1 < 10;
    //if (condition1 || condition2) {
    //    cout << "Condition 5: true" << endl;
    //}
    //else {
    //    cout << "Condition 5: false" << endl;
    //}

    //float value = 1.1;
    //if (value = 1.1) {
    //    cout << "Equals" << endl;
    //}
    //else {
    //    cout << "Not equal" << endl;
    //}
    //cout << setprecision(10) << value << endl;


    /*cout << "1.\tAdd new record." << endl;
    cout << "2.\tDelete record" << endl;
    cout << "3.\tView record" << endl;
    cout << "4.\tSearch record" << endl;
    cout << "5.\tQuit" << endl;
    cout << "Enter your selection >" << flush;
    int value;
    cin >> value;

    if (value == 1) {
        cout << "Adding new record..." << endl;
    }
    else if (value == 2) {
        cout << "Deleting record..." << endl;
    }
    else if (value == 3) {
        cout << "Viewing..." << endl;
    }
    else if (value == 4) {
        cout << "Searching..." << endl;
    }
    else if (value == 5) {
        cout << "Quitting..." << endl;
    }
    else {
        cout << "Invalid option" << endl;
    }*/


    /*if (value < 3) {
        cout << "Insufficient privileges to use these menu options!" << endl;
    }
    else {
        cout << "Privilege level sufficient." << endl;
    }
    if (value == 5) {
        cout << "Quitting... " << endl;
    }
    else {
        cout << "Not Quitting." << endl;
    }*/
    //string password = "hello";
    //cout << "Enter your password > " << flush;
    //string input;
    //cin >> input;
    //// cout << "'" << input << "'" << endl;
    //if (input == password) {
    //    cout << "Password accepted." << endl;
    //}
    //else {
    //    cout << "Password denied." << endl;
    //}




    // bool bValue = true;
    //  cout << bValue << endl;
    // char cValue = 'g';
    // cout << cValue << endl;
    // cout << "Size of char: " << sizeof(char) << endl;
    // wchar_t wValue = 'i';
    // cout << (char)wValue << endl;
    // cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

    // float fValue = 123.456789;
    // cout << "SizeOf float: " << sizeof(float) << endl;
    // cout << setprecision(20) << fixed << fValue << endl;
    // double dValue = 123.456789;
    // cout << setprecision(20) << fixed << dValue << endl;

    // long double lValue = 123.456789876543210;
    // cout << setprecision(20) << fixed << endl;
    // cout << "SizeOf long double: " << sizeof(lValue) << endl;

    // int value = -54656;
    // cout << value << endl;
    // cout << "Max int value " << INT_MAX << endl;
    // cout << "Min int value " << INT_MIN << endl;

    // long int lValue = 2345325345345;
    // cout << lValue <<  endl;
    // short int sValue = 23434;
    // cout << sValue << endl;

    // cout << "Size of int: " << sizeof(int) << endl;
    // cout << "Size of short int: " << sizeof(short int) << endl;

    // unsigned int uValue = 2342343;
    // cout << uValue << endl;

    // cout << "Enter your name: " << flush;
    // string input;
    // cin >> input;
    // cout << "You entered: " << input << endl;

    // cout << "Enter a number: " << flush;
    // int value;
    // cin >> value;
    // cout << "You entered: " << value << endl;


    // string text1 = "Hello ";
    // string text2 = "Fred";
    // string text3 = text1 + text2;
    // cout << text1 << text2 << endl;

    // cout << text3 << endl;

    // int numberCats = 5;
	// int numberDogs = 7;
	// int numberAnimals = numberCats + numberDogs;
	// cout << "I have " << numberCats << " cats and " << flush;
	// cout << "I have " << numberDogs << " dogs." << endl;
	// cout << "Total number of animals: " << numberAnimals << endl;

    // cout << "New dog acquired!" << endl;
    // numberDogs = numberDogs++;
    // cout << "New number of dogs: " << numberDogs << endl;

    // cout << "Starting program...." << flush;
    // cout << "This is some text" << endl;
    // cout << "Banana " << "Apple " << "Orange " << endl;

    // cout << "Hello World!\n" << endl;

    // cout << "BYE World!\n" << endl;
    return 0;
}
