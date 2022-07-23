#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "racecar";

	int i = 0;
	int j = strlen(str) - 1;

	while(i < j) {
		if(str[i] != str[j]) {
			// str is not a palindrome
			cout << str << " is not a palindrome" << endl;
			break;
		}
		i++;
		j--;
	}

	if(i >= j) {
		// str is a palindrome
		cout << str << " is a palindrome" << endl;
	}
	
	return 0;
}