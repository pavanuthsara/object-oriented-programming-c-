#include <iostream>
using namespace std;

// virtual function -> most derived class

class Instrument {
public:
	virtual void MakeSound() {
		cout << "Instrument playing..." << endl;
	}
};

class Accordion : public Instrument {
public:
	void MakeSound() {
		cout << "Accordian playing..." << endl;
	}
};

int main() {

	Instrument *i1 = new Accordion();
	i1->MakeSound();

	return 0;
}