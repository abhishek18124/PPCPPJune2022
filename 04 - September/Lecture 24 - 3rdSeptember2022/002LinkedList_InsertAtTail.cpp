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

node* getTail(node* head) {

	node* tail = head;
	while(tail->next != NULL) {
		tail = tail->next;
	}
	return tail;

}

void insertAtTail(node*& head, int data) {

	if(!head) { // head == NULL
		// linkedList is empty
		insertAtHead(head, data);
		return;
	}

	// 1. create a new node with the given data on the heap
	node* n = new node(data);

	// 2. get hold of the pointer to the tail node
	node* tail = getTail(head);

	// 3. update the next pointer of the tail node such that
	// it points to the newly created node
	tail->next = n;

}

int main() {

	node* head = NULL; // initially, linkedList is empty

	// insertAtHead(head, 50);
	// insertAtHead(head, 40);
	// insertAtHead(head, 30);
	// insertAtHead(head, 20);
	// insertAtHead(head, 10);

	// printLinkedList(head);

	insertAtTail(head, 60);

	printLinkedList(head);

	return 0;
}
