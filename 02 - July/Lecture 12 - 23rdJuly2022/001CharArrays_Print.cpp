#include<iostream>

using namespace std;

int main() {

	// int A[] = {10, 20, 30};
	// int n = sizeof(A) / sizeof(int);

	// for(int i=0; i<n; i++) {
	// 	cout << A[i] << " ";
	// }

	char arr[] = {'a', 'b', 'c', '\0'};

	cout << arr << endl;

	char brr[] = "def"; // '\0' is automatically added

	cout << brr << endl;
	
	return 0;
}