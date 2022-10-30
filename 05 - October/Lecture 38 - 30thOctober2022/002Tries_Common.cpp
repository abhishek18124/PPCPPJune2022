#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		unordered_map<char, node*> childMap;
		int freq;

		node(char ch) {
			this->ch = ch;
			this->terminal = false;
			this->freq = 0;
		}

};

class trie {
	node* root;

	public :

		trie() {
			root = new node('\0');
		}

		void insert(string str) {
			node* cur = root;
			for(char ch : str) {
				if(cur->childMap.find(ch) == cur->childMap.end()) {
					node* n = new node(ch);
					cur->childMap[ch] = n;
				}
				cur = cur->childMap[ch];
				cur->freq++;
			}
			cur->terminal = true;
		}

		bool search(string str) {
			node* cur = root;
			for(char ch : str) {
				if(cur->childMap.find(ch) == cur->childMap.end()) {
					// cur node does not have a child node with the value ch
					return false;
				}
				cur = cur->childMap[ch];
			}
			return cur->terminal;
		}

		string longestPrefix(int n) {
			node* cur = root;
			string prefix = "";
			while(cur->childMap.size() > 0) {
				cur = cur->childMap.begin()->second;
				if(cur->freq != n) break;
				prefix += cur->ch;
			}
			return prefix;
		}
};


int main() {

	vector<string> words = {"flowering", "flower", "pry"};
	int n = words.size();

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	cout << t.longestPrefix(n) << endl;


	return 0;
}