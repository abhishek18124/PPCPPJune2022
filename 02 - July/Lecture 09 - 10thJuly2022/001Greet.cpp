#include<iostream>

using namespace std;

void printGreeting() {
	cout << "Hello World" << endl;
	return; // optional
}

int main() {

	cout << "inside main() : before fn call" << endl;

	printGreeting();

	cout << "inside main() : after fn call" << endl;

	return 0;
}