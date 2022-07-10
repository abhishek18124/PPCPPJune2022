#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 30, 20, 10};
	int n = sizeof(A) / sizeof(int);

	for(int i=1; i<=n-1; i++) {

		// in the ith pass of bubble sort, place 
		// the largest element in the unsorted 
		// part of the array to its correct pos.

		bool flag = false; // assume no swaps have been done

		for(int j=0; j<n-i; j++) {
			if(A[j] > A[j+1]) {
				swap(A[j], A[j+1]);
				flag = true;
			}
		}

		if(flag == false) {
			// no swaps were done in the ith pass
			// i.e. array is now sorted so stop.
			break;
		}
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " "; 
	}

	cout << endl;

	return 0;
}