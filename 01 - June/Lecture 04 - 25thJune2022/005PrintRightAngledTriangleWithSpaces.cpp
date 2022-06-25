#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int i = 1;
	while(i <= n) {
		// print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << " ";
			j = j+1;
		}

		// print i stars
		j = 1;
		while(j <= i) {
			cout << "*";
			j = j+1;
		}


		cout << endl;
		i =  i+1;
	}
	

	return 0;
}