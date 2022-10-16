#include<iostream>
#include<unordered_set>

using namespace std;

int main() {

	string str = "abccccdd";

	unordered_set<char> seen;
	int len = 0; // to track the length of the longest palindrome

	for(char ch : str) {
		if(seen.find(ch) != seen.end()) {
			// you've seen ch before, there this 'ch' and the one you've
			// seen earlier forms a pair
			seen.erase(ch);
			len += 2;
		} else {
			// you're seeing ch for the first time
			seen.insert(ch);
		}
	}

	if(!seen.empty()) {
		len += 1;
	}

	cout << len << endl;
	
	return 0;
}