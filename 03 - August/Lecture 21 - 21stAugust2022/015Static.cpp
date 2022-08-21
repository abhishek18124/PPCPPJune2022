#include<iostream>

using namespace std;

// 1. static variable is init once
// 2. it is accessible in the func. where it is declared
// 3. it can persist its value across func. calls since it
// is stored on the global/static memory

void f() {
	static int x = 0;
	x++;
	cout << x << endl;
}

int main() {

	f();
	f();
	f();

	return 0;
}