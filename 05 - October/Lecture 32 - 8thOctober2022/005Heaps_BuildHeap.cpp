/*

	Given an array of n integers, design a O(n) algorirthm to build a min_heap in-place.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int n, int i) {
	// fix the min-heap property at the ith index

	int min_idx = i; 

	int left_idx  = 2*i + 1;
	if(left_idx < n && v[left_idx] < v[min_idx]) {
		min_idx = left_idx;
	}

	int right_idx = 2*i + 2;
	if(right_idx < n && v[right_idx] < v[min_idx]) {
		min_idx = right_idx;
	}

	if(min_idx != i) {
		swap(v[i], v[min_idx]);
		heapify(v, n, min_idx);
	}
}


int main() {

	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};

	int n = v.size();
	
	// 1. consider the given vector as a CBT in which 
	// minHeap property is violated at multiply locations

	for(int i=n-1; i>=0; i--) {
		heapify(v, n, i);
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}





