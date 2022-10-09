/*

    Given k sorted linked list, merge them and print the sorted output.

    k = 3
    Input : 1->3->5
            2->4->6 
            0->8->7
        
    Output: 0->1->2->3->4->5->6->7->8

*/

#include<iostream>
#include<queue>
#include<vector>

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

class nodeComparator {

    public :

    bool operator()(node* a, node* b) {
        // return b->data < a->data;

        if(b->data < a->data) {
            // we need a swap for a minHeap
            return true;
        }

        // we don't need a swap for a minHeap 
        return false;

    }

};

node* mergeSortedLinkedList(vector<node*> v) {

    priority_queue<node*, vector<node*>, nodeComparator> minHeap(v.begin(), v.end());

    // for(int i=0; i<v.size(); i++) {
    //     minHeap.push(v[i]);
    // }

    node* head = new node(0); // dummy node
    node* temp = head;

    while(!minHeap.empty()) {
        node* minNode = minHeap.top(); minHeap.pop();
        temp->next = minNode;
        temp = temp->next;
        if(minNode->next) {
            minHeap.push(minNode->next);
        }
    }

    temp = head;
    head = head->next;
    delete temp;       // de-allocate memory for the dummy node

    return head;

}

int main() {

    node* head1 = NULL; 

    insertAtHead(head1, 5);
    insertAtHead(head1, 3);
    insertAtHead(head1, 1);

    printLinkedList(head1);

    node* head2 = NULL; 

    insertAtHead(head2, 6);
    insertAtHead(head2, 4);
    insertAtHead(head2, 2);

    printLinkedList(head2);

    node* head3 = NULL; 

    insertAtHead(head3, 9);
    insertAtHead(head3, 8);
    insertAtHead(head3, 7);

    printLinkedList(head3);

    vector<node*> v = {head1, head2, head3};

    node* head = mergeSortedLinkedList(v);

    printLinkedList(head);

    return 0;
}
