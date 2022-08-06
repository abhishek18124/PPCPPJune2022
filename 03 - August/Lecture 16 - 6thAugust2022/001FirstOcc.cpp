#include<iostream>

using namespace std;

int f(int* arr, int n, int t, int i) {

	// base case
	
	// if(i == n-1) {
	// 	// find the idx of the first occ. of the 't' in arr[n-1...n-1]
	// 	return arr[n-1] == t ? n-1 : -1;
	// }

	if(i == n) {
		// find the idx of the first occ. of the 't' in arr[n...n-1] -> empty subarray
		return -1;
	}

	// recursive case

	if(arr[i] == t) {
		return i;
	}

	// ask your friend to find the index of the first occ. of the target in arr[i+1...n-1]
	return f(arr, n, t, i+1);
}

int main() {

	int arr[] = {10, 20, 30, 20, 30};
	int n = sizeof(arr) / sizeof(int);
	int t = 30;

	cout << f(arr, n, t, 0) << endl;

	return 0;
}