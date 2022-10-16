#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool check(vector<int> v, int n, int k) {

	unordered_map<int, int> indexMap;
	
	for(int i=0; i<n; i++) {
		int x = v[i];
		if(indexMap.find(x) != indexMap.end()) {
			// x pehle aaya hai
			if(i-indexMap[x] <= k) {
				return true;
			}
		}
		indexMap[x] = i;
	}
	return false;
}

int main() {

	vector<int> v = {1, 2, 3, 1, 2, 1};
	int n = v.size();
	int k = 2;

	check(v, n, k) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}