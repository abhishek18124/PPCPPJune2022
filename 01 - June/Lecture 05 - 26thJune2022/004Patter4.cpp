#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	while(i <= n) {

		// print i nos. for the ith row
		int no;
		if(i%2 == 0) {
			// ith row is an even row
			no = 0;
		} else {
			// ith row is an odd row
			no = 1;
		}

		int j = 1;
		
		while(j <= i) {
			cout << no;
			j++;
			no = 1 - no;
		}

		cout << endl;
		i++;

	}

	cout << endl;

	return 0;
}