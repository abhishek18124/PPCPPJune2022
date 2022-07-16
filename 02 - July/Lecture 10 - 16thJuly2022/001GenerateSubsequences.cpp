#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30};
	int n = sizeof(A)/ sizeof(int);

	for(int num=0; num<(1<<n); num++) {
		for(int k=0; k<n; k++) {
			if((num>>k)&1) {
				cout << A[k] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}