/*

given the pre-order traversal of a binary tree, output its right view.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 30 60 70
*/

#include<iostream>
#include<queue>

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

	// 1. read the data of the root node
	int data;
	cin >> data;

	if(data == -1) {
		// construct an empty tree and return the pointer to its root
		return NULL;
	}

	// 2. construct the root node
	node* root = new node(data);

	// 3. read the preOrder traversal of the leftSubtree & build the leftSubtree
	root->left = buildTree();

	// 4. read the preOrder traversal of the rightSubtree & build the rightSubtree
	root->right = buildTree();

	return root;

}

void rightView(node* root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front();
		q.pop();

		if(!front) { // front == NULL
			// you've processed the last level
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			if(!q.front()){ // q.front() == NULL
				cout << front->data << " ";
			}
			if(front->left) {
				q.push(front->left);
			}
			if(front->right) {
				q.push(front->right);
			}
		}
	}

}

int maxLevel = -1; // maximum level upto which you've printed the rightMost node

void rightViewRecursive(node* root, int level) {

	// base case
	if(!root) {
		return;
	}

	// recursive case
	if(level > maxLevel) {
		cout << root->data << " ";
		maxLevel = level;
	}
	rightViewRecursive(root->right, level+1);
	rightViewRecursive(root->left, level+1);

}


int main() {

	node* root = NULL;
	root = buildTree();
	// rightView(root);

	rightViewRecursive(root, 0);
		
	return 0;
}