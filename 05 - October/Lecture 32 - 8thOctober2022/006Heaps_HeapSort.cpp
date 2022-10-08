/*

	Given an array of n integers, sort the array using heap sort algorithm.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int n, int i) {
	// fix the max-heap property at the ith index

	int max_idx = i; 

	int left_idx  = 2*i + 1;
	if(left_idx < n && v[left_idx] > v[max_idx]) {
		max_idx = left_idx;
	}

	int right_idx = 2*i + 2;
	if(right_idx < n && v[right_idx] > v[max_idx]) {
		max_idx = right_idx;
	}

	if(max_idx != i) {
		swap(v[i], v[max_idx]);
		heapify(v, n, max_idx);
	}
}


int main() {
	
	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};

	int n = v.size();

	// 1. transform the array into maxHeap

	for(int i=n-1; i>=0; i--) {
		heapify(v, n, i);
	}

	int heapsize = n;

	while(heapsize > 1) {
		swap(v[0], v[heapsize-1]);
		heapsize--;
		heapify(v, heapsize, 0);
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	
	return 0;
}
