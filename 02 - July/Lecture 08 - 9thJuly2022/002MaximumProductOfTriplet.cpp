#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-1, -2, -3, 10, 20, 30};
	int n = sizeof(A) / sizeof(int);

	int fL = INT_MIN;
	int sL = INT_MIN;
	int tL = INT_MIN;

	int fS = INT_MAX;
	int sS = INT_MAX;

	for(int i=0; i<n; i++) {

		if(A[i] > fL) {
			tL = sL;
			sL = fL;
			fL = A[i];
		} else if(A[i] > sL) {
			tL = sL;
			sL = A[i];
		} else if(A[i] > tL) {
			tL = A[i];
		}


		if(A[i] < fS) {
			sS = fS;
			fS = A[i];
		} else if(A[i] < sS) {
			sS = A[i];
		}

	}


	int p1 = fL * sL * tL;
	int p2 = fL * fS * sS;

	cout << max(p1, p2) << endl;

	int a = 10;
	int b = 20;
	int c = 30;

	cout << max(a, max(b, c)) << endl;
	cout << min({a, b, c}) << endl;

	return 0;
}




