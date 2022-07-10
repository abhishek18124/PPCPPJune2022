#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {10, 20, 0, 25, 5};
	int n = sizeof(A) / sizeof(int);

	int fS = INT_MAX;
	int sS = INT_MAX;

	for(int i=0; i<n; i++) {

		if(A[i] < fS) {
			sS = fS;
			fS = A[i];
		} else if(A[i] < sS) {
			sS = A[i];
		}

	}

	cout << fS << " " << sS << endl;

	return 0;
}