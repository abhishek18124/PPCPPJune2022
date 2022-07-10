#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {
	int rn = sqrt(n);
	for(int i=2; i<=rn; i++) {
		if(n%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int n = 2;

	isPrime(n) ? cout << "prime" << endl :
	             cout << "not prime" << endl;

	return 0;
}