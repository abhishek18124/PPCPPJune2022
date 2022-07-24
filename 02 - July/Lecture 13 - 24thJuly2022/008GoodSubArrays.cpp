// constrains : N <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 6, 5, 2, 4, 3};
	int n = sizeof(arr) / sizeof(int);

	int cs = 0;
	int freq[100] = {0};
	freq[0] = 1;

	for(int i=0; i<n; i++) {
		cs += arr[i];
		freq[((cs%n)+n)%n]++;
	}

	// for(int i=0; i<n; i++) {
	// 	cout << freq[i] << " ";
	// }

	// cout << endl;

	int count = 0;
	for(int i=0; i<n; i++) {
		int x_i = freq[i];
		if(x_i >= 2) {
			count += (x_i*(x_i-1))/2;
		}
	}

	cout << count << endl;


	return 0;
}