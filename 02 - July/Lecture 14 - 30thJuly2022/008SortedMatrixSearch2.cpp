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


// approach 3 - O(m+n)
pair<int, int> sortedMatrixSearchEfficient(int mat[][4], int m, int n, int t) {

	int i = 0;
	int j = n-1;
	pair<int, int> p = {-1, -1};

	while(i < m and j >= 0) {
		if(mat[i][j] == t) {
			p.first = i;
			p.second = j;
			break;
		} else if(t > mat[i][j]) {
			i++;
		} else {
			j--;
		}
	}

	return p;

}

int main() {

	int mat[][4]  = {{1,  2,  3,  4},
					 {5,  6,  7,  8},
					 {9,  10, 11, 12},
					 {13, 14, 15, 16}};

	int m = 4;
	int n = 4;

	int t = 100;

	pair<int, int> p = sortedMatrixSearchEfficient(mat, m, n, t);

	cout << p.first << " " << p.second << endl;

	return 0;
}