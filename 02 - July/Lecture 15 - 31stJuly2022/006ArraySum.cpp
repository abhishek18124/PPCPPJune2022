#include<iostream>

using namespace std;

int arraySum(int* X, int n, int i) {

	// base case
	
	// if(i == n-1) {
	// 	return X[n-1];
	// }

	if(i == n) {
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute the sum of elements in the sub-array that starts at the (i+1)th index
	int A = arraySum(X, n, i+1);

	return X[i] + A;
}

int main() {

	int X[] = {1, 2, 3, 4, 5};
	int n = sizeof(X) / sizeof(int);

	cout << arraySum(X, n, 0) << endl;

	return 0;
}