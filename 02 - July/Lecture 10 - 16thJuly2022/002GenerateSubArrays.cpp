#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A)/ sizeof(int);

	// iterate over the starting indices
	for(int i=0; i<n; i++) {
		// for each starting index i, interate over the ending indices
		for(int j=i; j<n; j++) {
			// cout << i << " " << j << endl;
			for(int k=i; k<=j; k++) {
				cout << A[k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}