#include<iostream>
#define PI 3.14
#define PRINT cout << 
#define SEMICOLON ;
#define F1 for(int i=0; i<5; i++) {cout << i << " ";}
#define F2(n) for(int i=0; i<n; i++) {cout << i << " ";}

using namespace std;

int main() {

	PRINT PI << endl SEMICOLON
	PRINT 2*PI*10 << endl SEMICOLON

	// F1

	F2(10)

	return 0;
}