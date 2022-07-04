// n <= 100

#include<iostream>

using namespace std;

int main() {

	// 1. read the value of n from the user
	int n;
	cout << "Enter the size of n : ";
	cin >> n;

	// 2. read n integer values from the user into the array 
	int arr[100];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	// 3. read the value of target from the user
	int target;
	cout << "Enter the target : ";
	cin >> target;

	// 4. find the index of the first occ. of target inside the array
		
	bool flag = false; // assume target is not present

	for(int i=0; i<n; i++) {
		if(arr[i] == target) {
			// you've found the target at the ith index
			cout << i << endl;
			flag = true;
		}
	}

	if(flag == false) { // !flag
		// target not found
		cout << -1;
	}


	return 0;
}