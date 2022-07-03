#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {

		// for the ith row, print (n-i+1) chars. 
		// in the inc. order starting with 'A'

		char ch = 'A';
		for(int j=1; j<=n-i+1; j++) {
			cout << ch << " ";
			ch++;
		}

		// followed by (n-i+1) chars. 
		// in the dec. order starting with the char
		// with which the last pattern ends

		ch--;
		for(int j=1; j<=n-i+1; j++) {
			cout << ch << " ";
			ch--;
		}

		cout << endl;

	}

	cout << endl;

	return 0;
}