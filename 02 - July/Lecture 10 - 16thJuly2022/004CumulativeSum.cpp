// n <= 100

#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-10, 20, -10, 40, -50};
	int n = sizeof(A)/ sizeof(int);

	int csum[101];

	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1] + A[i-1];
	}

	for(int i=0; i<=n; i++) {
		cout << csum[i] << " ";
	}

	cout << endl;

	return 0;
}