#include<iostream>

using namespace std;

int main() {

	int arr[5]; // array declaration

	cout << "sizeof(arr) : " << sizeof(arr) << "B" << endl;

	int n = sizeof(arr) / sizeof(int); // sizeof(arr) / sizeof(arr[0])

	cout << "no. of elements : " << n << endl;

 	
	return 0;
}