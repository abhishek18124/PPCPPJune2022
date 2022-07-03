#include<iostream>

using namespace std;

int main() {

	int n = 30;

	double sqrt = 0;
	int p = 5;
	float inc = 1;

	for(int i=0; i<=p; i++) {

		while(sqrt*sqrt <= n) {
			sqrt = sqrt + inc;
		}

		sqrt = sqrt - inc;
		inc = inc/10;

	}	

	cout << "sqrt(" << n <<") : " << sqrt << endl;

	return 0;
}