#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-10, 20, -10, 40, -50};
	int n = sizeof(A)/ sizeof(int);

	int maxSubArraySumSoFar = INT_MIN;

	// time - O(n^3)

	// iterate over the starting indices
	for(int i=0; i<n; i++) {
		// for each starting index i, interate over the ending indices
		for(int j=i; j<n; j++) {
			// cout << i << " " << j << endl;
			int sum = 0;
			for(int k=i; k<=j; k++) {
				sum += A[k];
			}
			if(sum > maxSubArraySumSoFar) {
				maxSubArraySumSoFar = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum = " << maxSubArraySumSoFar << endl;

	return 0;
}