#include<iostream>

using namespace std;

int main() {

	int n = 127;
	int count = 0;

	for(int k=0; k<32; k++) {

		// check if the kth bit of n is set or not
		
		// if((n>>k)&1) {
		// 	count++;
		// }

		if((1<<k)&n) {
			count++;
		}

	}

	cout << "no. of set bits : " << count << endl;

	return 0;
}