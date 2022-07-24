#include<iostream>

using namespace std;

bool checkAnagram(char* str1, char* str2) {

	int freq1[26] = {0};
	for(int i=0; str1[i]!='\0'; i++) {
		char ch = str1[i];
		int idx = ch-'a';
		freq1[idx]++; // freq1[idx] = freq1[idx]+1;
	}

	int freq2[26] = {0};
	for(int i=0; str2[i]!='\0'; i++) {
		freq2[str2[i]-'a']++;
	}

	for(int i=0; i<26; i++) {
		if(freq1[i] != freq2[i]) {
			return false;
		}
	}

	return true;
 
}

int main() {

	char str1[] = "hello";
	char str2[] = "lloeh";

	checkAnagram(str1, str2) ? cout << "anagram!" << endl :
	                           cout << "not anagram!" << endl;

	return 0;
}