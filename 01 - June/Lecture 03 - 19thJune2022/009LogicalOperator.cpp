#include<iostream>

using namespace std;

int main() {

	cout << "true and true : " << (true and true) << endl;
	cout << "true and false : " << (true and false) << endl;
	cout << "false and true : " << (false and true) << endl;
	cout << "false and false : " << (false and false) << endl;

	cout << endl;

	cout << "true or true : " << (true or true) << endl;
	cout << "true or false : " << (true or false) << endl;
	cout << "false or true : " << (false or true) << endl;
	cout << "false or false : " << (false or false) << endl;

	cout << endl;

	cout << "!false : " << (!false) << endl;
	cout << "!true : " << (!true) << endl;

	return 0;
}