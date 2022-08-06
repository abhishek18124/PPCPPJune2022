#include<iostream>

using namespace std;

int f(int* arr, int t, int i) {

	// base case
	if(i == -1) {
		// find the idx of the last occ. of the 't' in arr[0...-1] -> empty subarray
		return -1;
	}

	// recursive case

	if(arr[i] == t) {
		return i;
	}

	// ask your friend to search for the index of the last occ. of the 't' in the arr[0...i-1]
	return f(arr, t, i-1);
}

int main() {

	int arr[] = {10, 20, 30, 20, 30};
	int n = sizeof(arr) / sizeof(int);
	int t = 30;

	cout << f(arr, t, n-1) << endl;

	return 0;
}