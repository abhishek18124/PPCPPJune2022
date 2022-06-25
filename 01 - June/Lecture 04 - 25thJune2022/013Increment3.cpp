#include<iostream>

using namespace std;

int main() {

	// int a = 0;
	// int b = 11;

	// if(b < 0 or a++) {
	// 	a++;
	// } else {
	// 	b++;
	// }

	// cout << a << " " << b << endl;

	int a = 10;
	int b = a++ + ++a;
	cout << a << " " << b << endl;

	return 0;
}