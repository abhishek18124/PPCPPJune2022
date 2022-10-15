/*

	Implement a phonebook storing mapping between person's name and 
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["Akash"].push_back("1234");
	phoneMap["Akash"].push_back("5678");

	phoneMap["Naman"].push_back("0000");
	phoneMap["Naman"].push_back("1111");

	for(pair<string, vector<string>> p : phoneMap) {
		cout << p.first << " : ";
		for(string phoneNum : p.second) {
			cout << phoneNum << " ";
		}

		cout << endl;

	}


	return 0;
}