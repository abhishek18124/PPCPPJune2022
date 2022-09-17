#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	int A[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> -> <idx, val>
	vector<int> v;
	for(int i=0; i<n; i++) {
		while(!s.empty() && s.top().second >= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			v.push_back(-1);
		} else {
			v.push_back(s.top().first);
		}

		s.push({i, A[i]}); // s.push(make_pair(i, A[i]))
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}