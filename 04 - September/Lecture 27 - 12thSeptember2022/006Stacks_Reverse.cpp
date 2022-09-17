#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> s) {

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	cout << endl;

}

void insertAtBottom(stack<int>& s, int data) {

	// base case
	if(s.empty()) {
		s.push(data);
		return;
	}

	// recursive case

	// 1. temporarily store the top of the stack and delete it
	int x = s.top();
	s.pop();

	// 2. recursively insert data at the bottom the resulting stack
	insertAtBottom(s, data);

	// 3. push 'x' at the stack top
	s.push(x);

}


void reverse(stack<int>& s) {

	// base case
	if(s.empty()) {
		return;
	}

	// recursive case

	int y = s.top();
	s.pop();

	reverse(s);

	insertAtBottom(s, y);

}

int main() {

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	print(s);

	// reverse(s);

	stack<int> temp;

	while(!s.empty()) {
		temp.push(s.top());
		s.pop();
	}

	print(temp);

	return 0;
}