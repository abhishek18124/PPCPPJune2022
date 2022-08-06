#include<iostream>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                       	 "eight", "nine"};

void f(int n) {

	// base case
	if(n == 0) {
		return;
	}

	// recursive case

	// 1. ask your friend to print the spelling of n/10
	f(n/10);

	// int d = n%10;
	// string spelling = spellingMap[d];
	// cout << spelling << " ";

	cout << spellingMap[n%10] << " ";

}
 
int main() {

	int n = 1203;

	f(n);

	return 0;
}