#include<iostream>

using namespace std;

int main() {

	int n = 11;

	int i;

	for(i=2; i<=n-1; i++) {
		if(n%i == 0) {
			// i is a factor of n
			// cout << n << " is not a prime no." << endl;
			break;
		}
	}

	// if(i == n) {
	// 	cout <<  n << " is prime no." << endl;
	// } else {
	// 	cout << n << " is not a prime no." << endl;	
	// }

	i == n ? cout << n << " is a prime no." << endl :
	         cout << n << " is not a prime no." << endl;

	return 0;
}