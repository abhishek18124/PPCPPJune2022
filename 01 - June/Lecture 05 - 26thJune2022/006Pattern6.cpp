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

		// print i nos.
		j = 1;
		int no = i;
		while(j <= i) {
			cout << no;
			no++;
			j++;
		}

		cout << endl;
		i++;
 		
	}

	cout << endl;

	return 0;
}