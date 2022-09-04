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

int computeLengthIterative(node* head) {
	int count = 0;
	while(head != NULL) {
		count++;
		head = head->next;
	}
	return count;
}

node* bubbleSort(node* head) {

	int n = computeLengthIterative(head);

	int i = 1;
	while(i < n) {
		int j = 0; 
		// ...
		while(j < n-i) {
			// ...
			j++;
		}
		i++;
	}

	return head;
}

int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);

	head = bubbleSort(head);

	printLinkedList(head);

	return 0;
}