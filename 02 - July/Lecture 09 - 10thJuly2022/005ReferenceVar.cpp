#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int& y = x;

	y++;

	cout << y << endl;

	cout << x << endl;

	x++;

	cout << y << endl;

	return 0;
}