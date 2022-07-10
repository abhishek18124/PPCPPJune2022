#include<iostream>
#include<cmath>

using namespace std;

void f(int a, int b, int c) {
	cout << "inside f(int, int, int)" << endl;
}

void f(int a, int b, float c) {
	cout << "inside f(int, int, float)" << endl;
}


int main() {

	f(1, 2, 3.0f);


	return 0;
}