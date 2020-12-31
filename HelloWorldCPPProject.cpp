
#include <iostream>
#include <limits>
#include <iomanip>
 
using namespace std;

int main()
{

    int value1 = 7;
    int value2 = 4;

    if (value1 >= 5) {
        cout << "Condition 1: true" << endl;
    }
    else {
        cout << "Condition 1: false" << endl;
    }
    if (value1 == 7 && value2 < 3) {
        cout << "Condition 2: true" << endl;
    }
    else {
        cout << "Condition 2: false" << endl;
    }
    if (value1 == 7 ||value2 < 3) {
        cout << "Condition 3: true" << endl;
    }
    else {
        cout << "Condition 3: false" << endl;
    }
    if (value2 != 8 && value1 == 10 || value1 < 10) {
        cout << "Condition 4: true" << endl;
    }
    else {
        cout << "Condition 4: false" << endl;
    }

    bool condition1 = (value2 != 8) && (value1 == 10);
    bool condition2 = value1 < 10;
    if (condition1 || condition2) {
        cout << "Condition 5: true" << endl;
    }
    else {
        cout << "Condition 5: false" << endl;
    }

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
