#include<iostream>
#include<cmath>

using namespace std;

double computeAreaOfTriangle(int b, int h) {
	return 0.5 * b * h;
}

double computeAreaOfTriangle(int a, int b, int c) {
	double s = (a+b+c)*0.5;
	return sqrt(s*(s-a)*(s-b)*(s-c));	
}

int main() {

	cout << computeAreaOfTriangle(3, 4) << endl;
	cout << computeAreaOfTriangle(3, 4, 5) << endl;

	return 0;
}