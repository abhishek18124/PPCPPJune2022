/*

Given an integer matrix of dimensions m x n, traverse it diagonally.

Example :
	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12]
					   [13, 14, 15, 16]]

	Output : 1 6 11 16
	         2 7 12
	         3 8
	         4
	         5 10 15
	         9 14
	         13

	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12]]

	Output : 1 6 11
			 2 7 12
			 3 8
			 4
			 5 10
			 9

*/

#include<iostream>

using namespace std;

void traverse(int mat[][10], int m, int n, int i, int j) {
	int diagonalLength = min(m-i, n-j);
	for(int k=0; k<diagonalLength; k++) {
		cout << mat[i+k][j+k] << " ";
	}
	cout << endl;
}

void digonalTraversal(int mat[][10], int m, int n) {

	for(int j=0; j<n; j++) {
		traverse(mat, m, n, 0, j);
	}

	for(int i=1; i<m; i++) {
		traverse(mat, m, n, i, 0);
	}

}

int main() {
	
	int mat[10][10] = {{1,  2,  3,  4},
					   {5,  6,  7,  8},
					   {9,  10, 11, 12},
					   {13,  14, 15, 16}};

	int m = 4;
	int n = 4;

	digonalTraversal(mat, m, n);
	
	return 0;
}