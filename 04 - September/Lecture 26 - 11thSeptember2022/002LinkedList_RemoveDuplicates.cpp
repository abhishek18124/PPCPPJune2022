#include<iostream>

using namespace std;

class node {
public:

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

node* removeDuplicates(node* head) {

	node* cur = head->next;
	node* prev = head;

	while(cur) { // cur != NULL
		if(cur->data != prev->data) {
			// track the cur node
			prev->next = cur;
			prev = cur;
		}
		cur = cur->next;
	}

	prev->next = NULL;

	return head;
	
}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}