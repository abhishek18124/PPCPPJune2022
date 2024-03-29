#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	int W = 0; // to store maximum water that can be trapped b/w the buildings

	for(int i=0; i<n; i++) {

		// compute the amount of water that can be trapped on top of the ith builiding

		int lmax_i = h[i];
		for(int j=i-1; j>=0; j--) {
			lmax_i = max(lmax_i, h[j]);
		}

		int rmax_i = h[i];
		for(int j=i+1; j<n; j++) {
			rmax_i = max(rmax_i, h[j]);
		}
6 
		int w_i = min(lmax_i, rmax_i) - h[i];

		W += w_i;

	}

	cout << W << endl;

	return 0;
}