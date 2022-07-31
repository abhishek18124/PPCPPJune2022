#include<iostream>

using namespace std;

int arraySum2(int* X, int i) {

	// base case
	// if(i == 0) {
	// 	return X[0];
	// }

	if(i == -1) {
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute the sum of elements in the subarray that ends at the (i-1)th idx
	int A = arraySum2(X, i-1);

	return A + X[i];
}

int main() {

	int X[] = {1, 2, 3, 4, 5};
	int n = sizeof(X) / sizeof(int);

	cout << arraySum2(X, n-1) << endl;

	return 0;
}