#include<iostream>

using namespace std;

int main() {

	int x = 10;
	cout << &x << endl;
	cout << sizeof(&x) << "B" << endl;

	double y = 3.14;
	cout << &y << endl;
	cout << sizeof(&y) << "B" << endl;

	char ch = 'A';
	cout << &ch << endl;
	cout << sizeof(&ch) << "B" << endl;

	return 0;
}