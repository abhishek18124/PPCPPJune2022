// n <= 100

#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {1, -3, 4, 0, -2, 6};
	int n = sizeof(A)/ sizeof(int);

	int X = A[0];
	int maxSubArraySumSoFar = X;
	for(int i=1; i<n; i++) {
		X = max(X+A[i], A[i]);
		if(X > maxSubArraySumSoFar) {
			maxSubArraySumSoFar = X;
		}
	}

	cout << "Maximum Subarray Sum = " << maxSubArraySumSoFar << endl;

	return 0;
}