/*

Given an row-wise & col-wise sorted matrix of dimensions m x n 
and an integer 't', write a program to search for 't' in 'mat'. 

Example :
	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12],
					   [13, 14, 15, 16]]

			t = 10

	Output: True

*/

#include<iostream>
#include<algorithm>

using namespace std;

// approach 1 - O(m.n) -> brute force / naive approach

// approach 2 - O(m.logn)
bool sortedMatrixSearch(int mat[][4], int m, int n, int t) {

	for(int i=0; i<m; i++) {
		if(binary_search(mat[i], mat[i+1], t)) {
			return true;
		}
	}

	return false;

}

// approach 3 - O(m+n)
bool sortedMatrixSearchEfficient(int mat[][4], int m, int n, int t) {

	int i = 0;
	int j = n-1;

	while(i < m and j >= 0) {
		if(mat[i][j] == t) {
			return true;
		} else if(t > mat[i][j]) {
			i++;
		} else {
			j--;
		}
	}

	return false;

}

int main() {

	int mat[][4]  = {{1,  2,  3,  4},
					 {5,  6,  7,  8},
					 {9,  10, 11, 12},
					 {13, 14, 15, 16}};

	int m = 4;
	int n = 4;

	int t = 10;

	sortedMatrixSearchEfficient(mat, m, n, t) ? cout << t << " is found!" << endl :
	                                            cout << t << " is not found!" << endl;

	return 0;
}