
#include <iostream>
using namespace std;

int main()
{
	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;
	cout << "I have " << numberCats << " cats and " << flush;
	cout << "I have " << numberDogs << " dogs." << endl;
	cout << "Total number of animals: " << numberAnimals << endl;

	cout << "New dog acquired!" << endl;
	numberDogs = numberDogs++;
	cout << "New number of dogs: " << numberDogs << endl;

   // cout << "Starting program...." << flush;
   // cout << "This is some text" << endl;
   // cout << "Banana " << "Apple " << "Orange " << endl;

   // cout << "Hello World!\n" << endl;

   // cout << "BYE World!\n" << endl;
    return 0;
}
