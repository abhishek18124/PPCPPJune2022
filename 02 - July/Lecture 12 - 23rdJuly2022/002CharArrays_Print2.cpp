#include<iostream>

using namespace std;

int main() {

	char arr[] = "hello";

	for(int i=0; arr[i] != '\0'; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}