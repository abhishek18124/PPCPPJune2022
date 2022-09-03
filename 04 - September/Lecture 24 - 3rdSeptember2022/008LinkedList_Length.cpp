#include<iostream>

using namespace std;

class node {

	public :

		int data;
		node* next;

		node(int data) {
			this->data = data;
			this->next = NULL;
		}

};


void insertAtHead(node*& head, int data) {
	
	node* n = new node(data);
	n->next = head;
	head = n;

}

void printLinkedList(node* head) {
	
	while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	
	cout << endl;

}

int computeLengthIterative(node* head) {
	int count = 0;
	while(head) {
		count++;
		head = head->next;
	}
	return count;
}

int computeLengthRecursive(node* head) {

	// base case
	if(!head) { // head == NULL
		// linkedList is empty
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute the length of the subList
	// which starts from the node that comes after the head node

	int X = computeLengthRecursive(head->next);

	return 1 + X;

}

int main() {

	node* head = NULL; // initially, linkedList empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	cout << computeLengthIterative(head) << endl;
	cout << computeLengthRecursive(head) << endl;

	return 0;
}