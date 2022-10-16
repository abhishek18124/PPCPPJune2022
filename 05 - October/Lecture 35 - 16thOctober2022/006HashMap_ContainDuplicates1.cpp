#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main() {

	vector<int> v = {1, 2, 3, 1};

	// approach 1 - using hashMap 

	// unordered_map<int, int> freqMap;

	// for(int i=0; i<v.size(); i++) {
	// 	int x = v[i];
	// 	freqMap[x]++;
	// }

	// // for(pair<int, int> p : freqMap) {
	// // 	cout << p.first << " " << p.second << endl;
	// // }

	// bool flag = false; // assume no duplicates are present

	// for(pair<int, int> p : freqMap) {
	// 	if(p.second > 1) {
	// 		// you've found an element with a freq > 1
	// 		flag = true;
	// 		cout << "duplicate found!" << endl;
	// 		break;
	// 	}
	// }

	// if(flag == false) {
	// 	cout << "duplicate not found!" << endl;
	// }

	// approach 2 - using unordered_set (hash_set) 

	unordered_set<int> seen;
	bool flag = false; // assume no duplicates are present

	for(int i=0; i<v.size(); i++) {
		int x = v[i];
		if(seen.find(x) != seen.end()) {
			// you've found a duplicate 
			flag = true;
			cout << "duplicate found!" << endl;
			break;
		}
		seen.insert(x);
	}

	if(flag == false) {
		cout << "duplicate not found!" << endl;
	}



	return 0;
}