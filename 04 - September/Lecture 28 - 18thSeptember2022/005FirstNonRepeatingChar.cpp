#include<iostream>
#include<queue>

using namespace std;

int main() {

	queue<char> q;
	int freq[26] = {0}; 
	
	char ch;

	while(true) {

		cin >> ch;

		if(ch == '.') {
			// stream has ended
			break;
		}

		freq[ch-'a']++;
		if(freq[ch-'a'] == 1) {
			// ch is a non-repeating character
			q.push(ch);
		}

		while(!q.empty() && freq[q.front()-'a'] > 1) {
			q.pop();
		}

		q.empty() ? cout << -1 << " " :
		            cout << q.front() << " ";


	}

	return 0;
}