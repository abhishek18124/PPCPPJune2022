
/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

*/

#include<iostream>
#include<cmath>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};


node* buildTree() {

	int data;
	cin >> data;

	// base case

	if(data == -1) {
		// construct an empty tree and return pointer to its root node
		return NULL;
	}

	// recursive case

	// 1. construct the root data using the first value of the given preOrder traversal

	node* root = new node(data);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}

int computeHeight(node* root) {

	// base case
	if(!root) { // root == NULL
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

bool checkHeightBalanced(node* root) {

	// base case
	if(!root) { // root == NULL
		// tree is empty
		return true;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is heightBalanced
	bool x = checkHeightBalanced(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced
	bool y = checkHeightBalanced(root->right);

	// 3. check if the root node is heightBalanced
	bool z = abs(computeHeight(root->left) - computeHeight(root->right)) <= 1 ? true : false;

	return x && y && z;

}


int main() {

	node* root = buildTree();

	checkHeightBalanced(root) ? cout << "height-balanced!" << endl :
	                            cout << "not height-balanced" << endl;


	return 0;
}