#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v = {1, 2, 1, 0, 2, 0, 3, 4, 4};
	int n = v.size();

	for(int i=0; i<n; i++) {
		int x = v[i];
		v[x%n] += n;
	}

	// for(int i=0; i<v.size(); i++) {
	// 	cout << v[i] << " ";
	// }

	// cout << endl;

	for(int i=0; i<n; i++) {
		if(v[i]/n > 1) {
			cout << i << " ";
		}
	}

	cout << endl;
	
	return 0;
}