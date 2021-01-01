#include<string>
using namespace std;

class Pig
{
private:
	bool happy;
	string color;

public:
	void setColor();
	void makeHappy();
	void makeSad();
	void speak();
	void eat();
	Pig();
	~Pig();
};

