/*

	Given a BST and a key, design an algorithm to search for the key in the BST.	

	Output "true" is key is found otherwise output "false".

*/

#include<iostream>

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

bool search(node* root, int data) {

	// base case
	if(!root) { // root == NULL
		// tree is emtpy
		return false;
	}

	// recursive case

	if(data == root->data) {
		// you've found the node with the given 'data'
		return true;
	}

	if(data < root->data) {
		// search for the data in the leftSubtree
		return search(root->left, data);
	}

	// search fo the data in the rightSubtree
	return search(root->right, data);

}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	search(root, 3) ? cout << "true" << endl :
	                   cout << "false" << endl;
	
	return 0;
}


