//Thread.cpp
//Cody Abad
//CS 372 HW3

#include <thread>
using std::thread;

#include <iostream>
using std::cout;
using std::endl;

void hey() {
	cout << "hey" << endl;
}

void whatsup() {
	cout << "what's up" << endl;
}

void howdy() {
	cout << "howdy" << endl;
}

void yo() {
	cout << "yo" << endl;
}

void bee() {
	cout << "According to all known laws of aviation, there is no way a bee should be able to fly." << endl;
	cout << "Its wings are too small to get its fat little body off the ground.The bee, of course," << endl;
	cout << "flies anyway because bees don't care what humans think is impossible." << endl;
}

int main() {

	cout << "my dad when he sees his friends at home depot be like:" << endl;

	for (int i = 0; i < 100; i++) {
		thread jim(hey);
		thread bob(whatsup);
		thread steve(howdy);
		thread mark(yo);
		thread JerrySeinfeld(bee);
		JerrySeinfeld.join();
		jim.join();
		bob.join();
		steve.join();
		mark.join();
	}
	

	return 0;
}
