#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case
	if(n == 0) { // str == ""
		// string is empty
		return 0;
	}

	// recursive case

	// 1. extract the subString of length n-1 starting at index 0
	string subString = str.substr(0, n-1);

	// 2. ask your friend to tranform the subString into an integer
	int integerFromMyFriend = stringToInteger(subString, n-1);

	return integerFromMyFriend*10 + (str[n-1]-'0');

}

int main() {

	string str = "123";
	int n = str.size();

	int x = stringToInteger(str, n);

	cout << x+1 << endl;

	return 0;
}