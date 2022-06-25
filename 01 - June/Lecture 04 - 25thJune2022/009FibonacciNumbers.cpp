#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.

	if(n == 0) {
		cout << n << "th fibonacci number : " << a << endl;
		return 0;
	}

	int i = 2;

	while(i <= n) {
		int c = a + b; 
		a = b;
		b = c;
		i = i+1;
	}

	cout << n << "th fibonacci number : " << b << endl;

	return 0;
}