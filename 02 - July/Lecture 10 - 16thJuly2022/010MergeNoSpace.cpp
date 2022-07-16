// n <= 10 m <= 10

#include<iostream>

using namespace std;

int main() {

	int A[7] = {1, 3, 5, 7};
	int m = 4;


	int B[3] = {2, 4, 6};
	int n = 3;

	int i = m-1;
	int j = n-1;
	int k = m+n-1;

	while(i >= 0 and j >= 0) {
		if(A[i] > B[j]) {
			A[k] = A[i];
			i--;
			k--;
		} else {
			A[k] = B[j];
			j--;
			k--;
		}
	}

	while(j >= 0) {
		A[k] = B[j];
		k--;
		j--;
	}

	for(int i=0; i<m+n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	
	return 0;
}




