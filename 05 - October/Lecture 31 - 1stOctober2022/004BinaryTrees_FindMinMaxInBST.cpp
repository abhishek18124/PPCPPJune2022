/*

	Given a BST, design an algorithm to find the minimum and the maximum value inside it.

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

node* findMinimum(node* root) {

	if(!root) { // root == NULL
		// tree is empty
		return NULL;
	}

	node* temp = root;
	while(temp->left) { // temp->left != NULL
		temp = temp->left;
	}

	return temp;

}


node* findMaximum(node* root) {

	
	if(!root) { // root == NULL
		// tree is empty
		return NULL;
	}

	node* temp = root;
	while(temp->right) { // temp->right != NULL
		temp = temp->right;
	}

	return temp;

}


int main() {
	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);
	root->left->left->right = new node(4);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);
	root->right->right->left = new node(16);

	node* minNode = findMinimum(root);
	node* maxNode = findMaximum(root);

	minNode ? cout << "minimum data : " << minNode->data << endl :
	          cout << "tree is empty!" << endl;

	maxNode ? cout << "maximum data : " << maxNode->data << endl :
	          cout << "tree is empty!" << endl; 
	
	return 0;
}