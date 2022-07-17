#include<iostream>

using namespace std;

int main() {

	char ch = 'A';
	int* chptr = (int*)&ch;
	cout << "ch = " << ch << endl;
	cout << "sizeof(ch) = " << sizeof(ch) << endl;
	cout << "chptr = " << chptr << endl;
	cout << "sizeof(chptr) = " << sizeof(chptr) << endl;

	return 0;
}