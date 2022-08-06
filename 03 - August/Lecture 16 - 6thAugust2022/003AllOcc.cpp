#include<iostream>

using namespace std;

bool flag = false; // assume T is not present in the array

void f(int* arr, int n, int t, int i) {

	// base case
	if(i == n) {
		if(flag == false) {
			cout << -1 << " ";
		}
		return;
	}

	// recursive case

	if(arr[i] == t) {
		cout << i << " ";
		flag = true;;
	}

	f(arr, n, t, i+1);
}

int main() {

	int arr[] = {10, 20, 30, 20, 30};
	int n = sizeof(arr) / sizeof(int);
	int t = 100;

	f(arr, n, t, 0);

	return 0;
}