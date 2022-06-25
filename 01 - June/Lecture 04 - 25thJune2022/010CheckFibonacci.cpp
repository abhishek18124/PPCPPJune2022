#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	if(n == 0 || n == 1) {
		cout << "true" << endl;
		return 0;
	}

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.

	while(true) {

		int c = a + b;
		if(c == n) {
			// n is part of the fibonacci sequence
			cout << "true" << endl;
			return 0; // exit
		}

		if(c > n) {
			// n is not part of fibonacci sequence
			cout << "false" << endl;
			return 0; // exit
		}

		a = b;
		b = c;

	}

	return 0;
}