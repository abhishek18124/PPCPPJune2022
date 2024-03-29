/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> check if there exists a path from src to dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output :

		true (Yes, a path exist from src to dst)

*/

#include<iostream>

using namespace std;

// bool checkPath(char maze[][10], int i, int j) {

// 	// base case

// 	if(i == 0 and j == 0) {
// 		return true;
// 	}

// 	if(maze[i][j] == 'X') {
// 		return false;
// 	}

// 	// recursive case

// 	if(i == 0) {
// 		return checkPath(maze, i, j-1);
// 	}

// 	if(j == 0) {
// 		return checkPath(maze, i-1, j);
// 	}

// 	return checkPath(maze, i-1, j) or checkPath(maze, i, j-1);
// }

bool checkPath(char maze[][10], int i, int j) {

	// base case

	if(i == 0 and j == 0) {
		return true;
	}

	if(i == -1 or j == -1) {
		return false;
	}

	if(maze[i][j] == 'X') {
		return false;
	}

	// recursive case

	return checkPath(maze, i-1, j) or checkPath(maze, i, j-1);
}

int main() {

	char maze[][10] = {"0000",
	                   "0XX0",
	                   "000X",
	                   "0XX0"};
	int m = 4;
	int n = 4;

	checkPath(maze, m-1, n-1) ? cout << "path exists" << endl :
	                            cout << "path does'nt exist" << endl;

	return 0;
}