#include<iostream>

using namespace std;

int main() {

	int a = 10;
	int b = 5;

	cout << ( a & b ) << endl;
	cout << ( a | b ) << endl;
	cout << ( a ^ b ) << endl;

	int c = 7;

	cout << ( a & c ) << endl;
	cout << ( a | c ) << endl; 
	cout << ( a ^ c ) << endl;

	cout << (~0) << endl;
	cout << (~1) << endl;

	return 0;
}