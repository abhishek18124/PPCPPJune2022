// n <= 10 m <= 10

#include<iostream>

using namespace std;

int main() {

	int A[] = {1, 3, 5, 7};
	int m = sizeof(A)/ sizeof(int);


	int B[] = {2, 4, 6};
	int n = sizeof(B)/ sizeof(int);

	int C[20];

	int i = 0; // to iterate over A
	int j = 0; // to iterate over B
	int k = 0; // to iterate over C

	while(i < m and j < n) {
		if(A[i] < B[j]) {
			C[k] = A[i];
			i++;
			k++;
		} else {
			C[k] = B[j];
			j++;
			k++;
		}
 	}

 	while(i < m) {
 		C[k] = A[i];
 		i++;
 		k++;
 	}

 	while(j < n) {
 		C[k] = B[j];
 		j++;
 		k++;
 	}

 	for(int l=0; l<m+n; l++) {
 		cout << C[l] << " ";
 	}

 	cout << endl;
	
	return 0;
}




