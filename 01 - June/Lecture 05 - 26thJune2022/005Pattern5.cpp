#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	while(i <= n) {

		// print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << " ";
			j++;
		}

		// print i stars
		j = 1;
		while(j <= i) {
			cout << "*";
			j++;
		}

		cout << endl;
		i++;
 		
	}

	cout << endl;

	return 0;
}