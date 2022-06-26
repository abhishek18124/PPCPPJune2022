#include<iostream>

using namespace std;

int main() {

	int n = 9;
	bool flag = true; // assume n is prime
	
	for(int i=2; i<=n-1; i++) {
		if(n%i == 0) {
			// i is a factor of n
			flag = false;
			break;
		} 
	}

	if(flag) { // flag == true
		cout <<  n << " is a prime no." << endl;
	} else {
		cout << n << " is not a prime no." << endl;	
	}

	return 0;
}