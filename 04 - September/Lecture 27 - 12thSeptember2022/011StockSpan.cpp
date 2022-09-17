#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85, 200};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> -> idx, val
	vector<int> v;
	for(int i=0; i<n; i++) {
		while(!s.empty() && s.top().second <= A[i]) {
			s.pop();
		}

		int j;

		if(s.empty()) {
			j = -1;
		} else {
			j = s.top().first;
		}

		v.push_back(i-j);

		s.push({i, A[i]});
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}