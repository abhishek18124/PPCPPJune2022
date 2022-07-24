
#include<iostream>

using namespace std;

int main() {

	char str[100] = "codingblocks";
	int n = strlen(str);
	int k = 3;

	// 1. shift all the characters 'k' steps to the right
	for(int i=strlen(str); i>=0; i--) {
		str[i+k] = str[i];
	}

	// 2. move the last k characters to the front
	for(int i=0, j=n; i<k; i++, j++) {
		str[i] = str[j];
	}

	// 3. terminate the k-rotated string
	str[n] = '\0';

	cout << str << endl;
	
	return 0;
}
