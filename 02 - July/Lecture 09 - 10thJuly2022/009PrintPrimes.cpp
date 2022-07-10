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

void printPrimes(int N) {
	for(int n=2; n<=N; n++) {
		if(isPrime(n)) {
			cout << n << " ";
		}
	}
	cout << endl;
}

int main() {

	int N = 20;

	printPrimes(N);

	return 0;
}


