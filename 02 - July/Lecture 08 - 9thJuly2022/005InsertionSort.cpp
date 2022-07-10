#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 10, 30, 20};
	int n = sizeof(A) / sizeof(int);

	for(int i=1; i<n; i++) {

		// in the ith pass, insert the first element in the
		// unsorted part of the array to its correct position
		// in the sorted part of the array

		int key = A[i];
		int j = i-1;
		while(j >= 0 and A[j] > key) {
			A[j+1] = A[j];
			j--;
		}

		A[j+1] = key;

	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;



	return 0;
}