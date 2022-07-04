#include<iostream>

using namespace std;

int main() {

	int arr[5];

	int n = sizeof(arr) / sizeof(int);

	// cin >> arr[0];
	// cin >> arr[1];
	// cin >> arr[2];
	// cin >> arr[3];
	// cin >> arr[4];

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// printing array in reverse

	for(int i=n-1; i>=0; i--) {
		cout << arr[i] << " ";
	}

	
	return 0;
}