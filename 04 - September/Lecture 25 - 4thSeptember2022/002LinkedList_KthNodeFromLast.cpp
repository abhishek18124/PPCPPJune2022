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
	
	while(head) { // head != NULL
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;
}

node* kthNodeFromEnd(node* head, int k) {

	if(!head) {
		// linkedList is empty
		return head;
	}

	// 1. move 'cheat' pointer 'k' steps forward

	node* cheat = head;
	while(k--) {
		cheat = cheat->next;
	}

	node* slow = head;
	while(cheat) { // cheat != NULL
		cheat = cheat->next;
		slow = slow->next;
	}

	return slow;

} 

int main() {

	node* head = NULL;

	insertAtHead(head, 70);
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 2;

	node* kthNode = kthNodeFromEnd(head, k);

	kthNode ? cout << kthNode->data << endl : 
	          cout << "linkedList is empty" << endl;

	return 0;
}