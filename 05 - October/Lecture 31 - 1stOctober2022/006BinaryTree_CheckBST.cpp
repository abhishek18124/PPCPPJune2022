/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

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

bool isBST(node* root, long long lb, long long ub) {

	if(!root) {
		// tree is empty, assume it is a BST
		return true;
	}

	return 	root->data > lb && root->data < ub &&
			isBST(root->left, lb, root->data) &&
			isBST(root->right, root->data, ub);

}


int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	long long lb = (long long)INT_MIN-1;
	long long ub = (long long)INT_MAX+1;

	isBST(root, lb, ub) ? cout << "true"  << endl :
	                      cout << "false" << endl;

	return 0;
}