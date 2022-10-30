/*

Given an array of non-negative integers of size n, find the maximum possible XOR between 
any two numbers present in the array.

Example: 
	Input : x[] = {25, 10, 2, 8, 5, 3} 
	Output: 28 
	Explaination: The maximum result is 5 ^ 25 = 28 
	
	Input: x[] = {1, 2, 3, 4, 5, 6, 7} 
	Output: 7 
	Explaination: The maximum result is 1 ^ 6 = 7 

*/

#include<iostream>
#include<climits>

using namespace std;

class node {
public:
	
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	
	node() {
		this->left = NULL;
		this->right= NULL;
	}
};

class trie {
	
	node* root;

public:
	
	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for(int i=31; i>=0; i--) {
			int bit = (1<<i)&n;
			if(!bit) {
				// ith bit of n is 0, check if temp node has a left child or not
				if(!temp->left) {
					node* n = new node();
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of n is 1, check if temp node has a right child or not
				if(!temp->right) {
					node* n = new node();
					temp->right = n;
				}
				temp = temp->right;
			}
		}
	}

	int helper(int n) {
		int XOR = 0; // to store the max. possible xor involving n
		node* cur = root;

		for(int i=31; i>=0; i--) {
			int ith_bit = (n>>i)&1;

			if(ith_bit == 0) {
				// check if cur node has a right child or not i.e. bit 1
				if(cur->right != NULL) {
					// ith bit of XOR is also set
					XOR += (1<<i);
					cur = cur->right;
				} else {
					// ith bit of XOR is not set
					cur = cur->left;
				}

			} else {
				// check if cur node has a left child or not i.e. bit 0
				if(cur->left != NULL) {
					// ith bit of XOR is also set
					XOR += (1<<i);
					cur = cur->left;
				} else {
					// ith bit of XOR is not set
					cur = cur->right;
				}
			}
		}

		cout << n << "^" << (n^XOR) << " : " << XOR << endl;

		return XOR;
	}

	int maximumXOR(int* x, int n) {
		int lsf = 0; // to track the largest so far XOR b/w pair of values
		for(int i=0; i<n; i++) {
			lsf = max(lsf, helper(x[i]));
		}
		return lsf;
	}
};

int main() {

	int x[] = {10, 2, 4, 5, 8};
	int n = sizeof(x) / sizeof(int);

	trie t;

	for(int i=0; i<n; i++) {
		t.insert(x[i]);
	}

	cout << t.maximumXOR(x, n) << endl;
  
	return 0;
}