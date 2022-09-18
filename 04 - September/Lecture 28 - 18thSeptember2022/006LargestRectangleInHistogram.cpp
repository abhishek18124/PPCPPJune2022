#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	stack<pair<int, int>> s; // pair<int, int> -> <idx, val>
	vector<int> nsl;
	for(int i=0; i<n; i++) {
		while(!s.empty() && s.top().second >= h[i]) {
			s.pop();
		}

		if(s.empty()) {
			nsl.push_back(-1);
		} else {
			nsl.push_back(s.top().first);
		}

		s.push({i, h[i]}); // s.push(make_pair(i, h[i]))
	}

	while(!s.empty()) {
		s.pop();
	}
	
	vector<int> nsr;
	for(int i=n-1; i>=0; i--) {
		while(!s.empty() && s.top().second >= h[i]) {
			s.pop();
		}

		if(s.empty()) {
			nsr.push_back(n);
		} else {
			nsr.push_back(s.top().first);
		}

		s.push({i, h[i]}); // s.push(make_pair(i, h[i]))
	}

	reverse(nsr.begin(), nsr.end());

	int maxArea = 0;
	for(int i=0; i<n; i++) {
		int w = nsr[i]-nsl[i]-1;
		int a_i = h[i] * w; 
		maxArea = max(maxArea, a_i);
	}

	cout << maxArea << endl;

	return 0;
}