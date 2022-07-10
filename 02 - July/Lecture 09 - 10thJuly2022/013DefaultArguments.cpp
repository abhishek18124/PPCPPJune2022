#include<iostream>

using namespace std;

int f(int a, int b=0, int c=0) {
	return a+b+c;
}

int main() {

	cout << f(10, 20, 30) << endl;
	cout << f(10, 20) << endl;
	cout << f(10) << endl;

	return 0;
}