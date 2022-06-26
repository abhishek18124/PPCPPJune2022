#include<iostream>

using namespace std;

int main() {

	int N = 10;

	for(int n=2; n<=N; n++) {

		// check if 'n' is prime or not
		int i;

		for(i=2; i<=n-1; i++) {
			if(n%i == 0) {
				break;
			}
		}

		if(i == n) {
			cout << n << " ";
		}

	}


	return 0;
}