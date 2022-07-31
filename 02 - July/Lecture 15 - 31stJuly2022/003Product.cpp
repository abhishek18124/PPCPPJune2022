#include<iostream>

using namespace std;

int f(int a, int b) {

	// base case
	if(a == 0) {
		// what is the result of adding 'b' 0 times i.e. multiplying b by 0
		return 0;
	}

	// recursive case

	// 1. ask your friend the result of adding  'b', 'a'-1 times
	int A =	f(a-1, b);

	return b + A;

}

int main() {

	int a = 30;
	int b = 14;

	cout << f(a, b) << endl;

	return 0;
}