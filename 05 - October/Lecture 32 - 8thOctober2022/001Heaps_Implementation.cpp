/*

	Implementation of the heap/priority_queue data structure.

*/

#include<iostream>
#include<vector>

using namespace std;

class minHeap {

	vector<int> v;

	void heapify(int i) {
		// fix the min-heap property at the ith index

		int min_idx = i; 

		int left_idx  = 2*i + 1;
		if(left_idx < v.size() && v[left_idx] < v[min_idx]) {
			min_idx = left_idx;
		}

		int right_idx = 2*i + 2;
		if(right_idx < v.size() && v[right_idx] < v[min_idx]) {
			min_idx = right_idx;
		}

		if(min_idx != i) {
			swap(v[i], v[min_idx]);
			heapify(min_idx);
		}
	}

	public :

	void push(int data) {
		v.push_back(data);
		int childIdx = v.size()-1;
		int parentIdx = childIdx%2 == 1 ? childIdx/2 : childIdx/2-1;
		while(childIdx > 0 && v[childIdx] < v[parentIdx]) {
			swap(v[childIdx], v[parentIdx]);
			childIdx = parentIdx;
			parentIdx = childIdx%2 == 1 ? childIdx/2 : childIdx/2-1;
		}
	}

	void pop() {
		swap(v[0], v[v.size()-1]);
		v.pop_back();
		heapify(0);
	}

	int top() {
		return v[0]; // value at the root node
	}

	bool empty() {
		return v.empty();
	}

	int size() {
		return v.size();
	}

};

int main() {

	minHeap m;

	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl;

	while(!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}



