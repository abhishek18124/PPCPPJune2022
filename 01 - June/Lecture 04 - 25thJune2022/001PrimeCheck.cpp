#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int i = 2;
	while(i <= n-1) {
		if(n%i == 0) {
			cout << n << " is not a prime number!" << endl;
			return 0; // exit
		}
		i = i+1;
	}

	cout << n << " is a prime number!" << endl;

	return 0;
}