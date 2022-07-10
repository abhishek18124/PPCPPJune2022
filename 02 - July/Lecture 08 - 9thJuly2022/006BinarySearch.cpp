#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	int s = 0;
	int e = n-1;

	int t = 20;

	while(s <= e) {
		// int m = (s+e)/2; // can lead to integer overflow
		int m = s + ((e-s)>>1); // s + (e-s)/2 
		
		if(A[m] == t) {
			cout  << t << " found at index " << m << endl;
			break;
		} else if(A[m] > t) {
			// reduce your search space from [s, e] to [s, m-1]
			e = m-1;
		} else {
			// reduce your search space from [s, e] to [m+1, e]
			s = m+1;
		}
	}

	if(s > e) {
		cout << t << " not found!" << endl;
	}

	return 0;
}





