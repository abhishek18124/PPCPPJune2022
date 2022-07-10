#include<iostream>

using namespace std;

int sumOfArray(int A[], int n) {
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += A[i];
	}
	return sum;
}

void modify(int A[]) {
	A[0] = 100;
}

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A)/sizeof(int);

	cout << sumOfArray(A, n) << endl;

	modify(A);

	cout << "A[0] = " << A[0] << endl;
  
	return 0;
}