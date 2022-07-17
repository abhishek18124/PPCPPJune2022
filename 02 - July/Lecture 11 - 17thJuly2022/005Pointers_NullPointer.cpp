#include<iostream>

using namespace std;

int main() {

	int* xptr = NULL;

	cout << *xptr << endl; // you cannot derefernce a null pointer

	return 0;
}