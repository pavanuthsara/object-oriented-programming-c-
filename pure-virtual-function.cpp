#include <iostream>
using namespace std;

class Instrument {
public:
	//pure virtual function
	virtual void MakeSound() = 0;
};

class Accordion : public Instrument {
public:
	void MakeSound() {
		cout << "Accordian playing..." << endl;
	}
};

class Violin : public Instrument {
public:
	void MakeSound() {
		cout << "Violin playing..." << endl;
	}
};

int main() {

	Instrument *i1 = new Accordion();
	i1->MakeSound();
	Instrument* i2 = new Violin();
	i2->MakeSound();

	return 0;
}