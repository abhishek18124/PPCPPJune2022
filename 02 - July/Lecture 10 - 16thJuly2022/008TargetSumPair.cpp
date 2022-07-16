#include<iostream>

using namespace std;

int main() {

	int A[] = {0, 1, 2, 3, 4, 5, 7};
	int n = sizeof(A)/ sizeof(int);

	int i = 0;
	int j = n-1;

	int count = 0;

	int t = 6;

	while(i < j) {
		int sum = A[i]+A[j];
		if(sum == t) {
			count++;
			i++;
			j--;
		} else if(sum > t) {
			j--;
		} else {
			i++;
		}
	}

	cout << "number of pairs = " << count << endl;

	return 0;
}