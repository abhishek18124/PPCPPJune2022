// n <= 100

#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {1, -3, 4, 0, -2, 6};
	int n = sizeof(A)/ sizeof(int);

	int X[100];

	X[0] = A[0];
	int maxSubArraySumSoFar = X[0];
	for(int i=1; i<n; i++) {
		X[i] = max(X[i-1]+A[i], A[i]);
		if(X[i] > maxSubArraySumSoFar) {
			maxSubArraySumSoFar = X[i];
		}
	}

	cout << "Maximum Subarray Sum = " << maxSubArraySumSoFar << endl;

	return 0;
}