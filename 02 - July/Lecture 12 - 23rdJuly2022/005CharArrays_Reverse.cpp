#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {

	char str[] = "hello";

	cout << "Original string : " << str << endl;

	// int i = 0;
	// int j = strlen(str) - 1;

	// while(i < j) {
	// 	swap(str[i], str[j]);
	// 	i++;
	// 	j--;
	// }

	// you can use strrev() to reverse a string repr. as a char. array 
	// defined in the cstring header file

	int n = strlen(str);

	// reverse( [start, end) )

	// reverse(str, str+n); // str is the pointer to the element at the 0th index
	//                      // str+n is the pointer to the null character at the nth index


	reverse(str+1, str+4);

	cout << "Reversed  string after 1st reverse : " << str << endl; 


	return 0;
}