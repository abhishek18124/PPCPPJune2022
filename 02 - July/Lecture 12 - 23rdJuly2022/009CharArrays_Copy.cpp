#include<iostream>

using namespace std;

void copyString(char* str1, char* str2) {

	int i = 0; // iterate over str1
	int j = 0; // iterate over str2

	int m = strlen(str2);

	while(j <= m) {
		str1[i] = str2[j];
		i++;
		j++;
	}

}

int main() {

	char str1[100] = "hello";
	char str2[] = "wow";

	cout << "Before copy : " << str1 << endl;

	// copyString(str1, str2);

	strcpy(str1, str2); // strcpy(dest, src)
	
	cout << "After copy : " << str1 << endl;

	return 0;
}