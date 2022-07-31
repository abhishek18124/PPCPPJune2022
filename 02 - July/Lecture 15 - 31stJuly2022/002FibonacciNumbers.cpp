#include<iostream>

using namespace std;

int f(int n) {

	// base case
	if(n == 0 or n == 1) {
		return n;
	}

	// recursive case

	// 1. ask your friend for the (n-1)th fibonacci no.
	int A = f(n-1);

	// 2. ask your friend for the (n-2)th fibonacci no.
	int B = f(n-2);

	return A+B;

}

int main() { 

	int n = 6;

	cout << f(n) << endl;

	return 0;
}