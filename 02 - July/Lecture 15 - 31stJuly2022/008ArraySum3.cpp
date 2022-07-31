#include<iostream>

using namespace std;

int arraySum3(int* X, int s, int e) {

	// base case
	if(s == e) {
		return X[s]; // or X[e]
	}

	// recursive case

	int m = s+(e-s)/2;

	// 1. ask your friend to compute the sum of X[s...m]
	int A = arraySum3(X, s, m);

	// 2. ask your friend to compute the sum of X[m+1...e]
	int B = arraySum3(X, m+1, e);

	return A+B;

}

int main() {

	int X[] = {1, 2, 3, 4, 5};
	int n = sizeof(X) / sizeof(int);

	cout << arraySum3(X, 0, n-1) << endl;

	return 0;
}