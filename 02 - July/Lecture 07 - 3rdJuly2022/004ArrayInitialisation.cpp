#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	int brr[5] = {10, 20, 30};
	int m = sizeof(brr) / sizeof(int);

	for(int i=0; i<m; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;

	// int crr[5] = {10, 20, 30, 40, 50, 60}; // error

	
	return 0;
}