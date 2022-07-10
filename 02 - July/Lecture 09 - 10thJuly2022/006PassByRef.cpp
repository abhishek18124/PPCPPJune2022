#include<iostream>

using namespace std;

void f1(int a) {
	cout << "inside f : before inc. a = " << a << endl;
	a++;
	cout << "inside f : after inc. a = " << a << endl;
}

void f2(int& a) {
	cout << "inside f : before inc. a = " << a << endl;
	a++;
	cout << "inside f : after inc. a = " << a << endl;
}

int main() {

	int a = 0;

	cout << "inside main : before f() a = " << a << endl;

	// f1(a);
	f2(a);

	cout << "inside main : after f() a = " << a << endl;

	return 0;
}