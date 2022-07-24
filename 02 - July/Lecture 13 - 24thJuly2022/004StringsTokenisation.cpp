#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "a###b$#.c.de#.$$f.ghi";
	char dlim[] = ".$#";

	// char* token = strtok(str, dlim);
	// cout << token << endl;

	// token = strtok(NULL, dlim);
	// cout << token << endl;
	
	// token = strtok(NULL, dlim);
	// cout << token << endl;

	char* token = strtok(str, dlim);

	while(token != NULL) {
		cout << token << endl;
		token = strtok(NULL, dlim);
	}

	return 0;
}