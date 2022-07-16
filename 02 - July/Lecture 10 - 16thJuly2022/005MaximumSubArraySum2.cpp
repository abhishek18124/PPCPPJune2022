// n <= 100

#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-10, 20, -10, 40, -50};
	int n = sizeof(A)/ sizeof(int);

	int csum[101];

	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1] + A[i-1];
	}

	int maxSubArraySumSoFar = INT_MIN;

	// time - O(n^2)

	// iterate over the starting indices
	for(int i=0; i<n; i++) {
		// for each starting index i, interate over the ending indices
		for(int j=i; j<n; j++) {
			int sum = csum[j+1]-csum[i];
			if(sum > maxSubArraySumSoFar) {
				maxSubArraySumSoFar = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum = " << maxSubArraySumSoFar << endl;

	return 0;
}