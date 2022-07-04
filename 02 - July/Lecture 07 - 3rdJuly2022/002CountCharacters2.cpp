#include<iostream>

using namespace std;

int main() {

	char ch;

	int lowercaseCount = 0;
	int uppercaseCount = 0;
	int digitCount = 0;
	int specialCount = 0;
	int whitespacesCount = 0;

	while(true) {

		ch = cin.get();

		if(ch == '$') {
			break;
		}

		if(ch >= 'a' and ch <= 'z') {
			lowercaseCount++;
		} else if(ch >= 'A' and ch <= 'Z') {
			uppercaseCount++;
		} else if(ch >= '0' and ch <= '9') {
			digitCount++;
		} else if(ch == ' ' ||  ch == '\n' || ch == '\t') {
			whitespacesCount++;
		} else {
			specialCount++;
		}

	}

	cout << "lowerCase count : " << lowercaseCount << endl;
	cout << "upperCase count : " << uppercaseCount << endl;
	cout << "digit count : " << digitCount << endl;
	cout << "whitespaces count : " << whitespacesCount << endl;
	cout << "special symbol count : " << specialCount << endl;

	return 0;
}


