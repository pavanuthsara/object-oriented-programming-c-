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
	Instrument* i2 = new Violin();

	Instrument* instruments[2] = { i1, i2 };
	for (int i = 0; i < 2; i++) {
		instruments[i]->MakeSound();
	}

	return 0;
}