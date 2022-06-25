#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int lsf = INT_MIN;
	int x;

	int i = 1;
	while(i <= n) {

		// read the next integer from user
		cin >> x;

		// compare it with lsf
		if(x > lsf) {
			lsf = x;
		}

		// cout << "lsf : " << lsf << endl;

		i = i+1;
	
	}

	cout << "Largest of " << n << " numbers : " << lsf << endl;

	return 0;
}