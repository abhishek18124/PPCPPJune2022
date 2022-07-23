// n <= 50 and m <= 50

#include<iostream>
#include<cstring>

using namespace std;

void stringConcat(char* str1, char* str2) {

	int i = strlen(str1); // to iterate over str1 from its '\0' char.
	int j = 0; // to iterate over str2

	int m = strlen(str2);
	while(j <= m) {
		str1[i] = str2[j];
		i++;
		j++;
	}

	// str1[i] = '\0'; // required if loop runs till < m

}

int main() {

	char str1[101] = "hello";
	char str2[] = "world";

	cout << "Before concat : " << str1 << endl;

	// stringConcat(str1, str2);

	strcat(str1, str2);

	cout << "After concat : " << str1 << endl;

	return 0;
}