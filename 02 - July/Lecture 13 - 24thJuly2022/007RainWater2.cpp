// n <= 100

#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	int lmax[100];

	lmax[0] = h[0];
	for(int i=1; i<n; i++) {
		lmax[i] = max(lmax[i-1], h[i]);
	}

	int rmax[100];

	rmax[n-1] = h[n-1];
	for(int i=n-2; i>=0; i--) {
		rmax[i] = max(rmax[i+1], h[i]);
	}

	int W = 0; // to store maximum water that can be trapped b/w the buildings

	for(int i=0; i<n; i++) {

		// compute the amount of water that can be trapped on top of the ith builiding
 
		int w_i = min(lmax[i], rmax[i]) - h[i];

		W += w_i;

	}

	cout << W << endl;

	return 0;
}