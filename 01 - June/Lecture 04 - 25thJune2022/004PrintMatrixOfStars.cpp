#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int i = 1;
	while(i <= n) {
		// print 'n' *'s for the ith row
		int j = 1;
		while(j <= n) {
			cout << "*";
			j = j+1;
		}
		cout << endl;
		i = i+1;
	}
	

	return 0;
}