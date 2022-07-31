#include<iostream>

using namespace std;

int f(int n) {

	// base case
	if(n == 0) {
		// 0! = 1
		return 1;
	}

	// recurisive case

	// 1. ask your friend to compute (n-1)! 
	int A = f(n-1);

	return n*A;

}

int main() {

	int n = 10;

	cout << f(n) << endl;

	return 0;
}