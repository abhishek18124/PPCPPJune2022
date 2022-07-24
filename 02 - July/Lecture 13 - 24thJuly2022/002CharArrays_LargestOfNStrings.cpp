// strlen <= 100 

#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the no. of strings : ";
	cin >> n;

	cin.ignore();

	// cin.get();

	char inp[101];
	cin.getline(inp, 101);

	char out[101]; // largest so far
	strcpy(out, inp);

	for(int i=1; i<n; i++) {
		// read the next string
		cin.getline(inp, 101);

		// compare 'inp' with 'out'
		if(strcmp(inp, out) > 0) {
			strcpy(out, inp);
		}
	}

	cout << "largest : " << out << endl;

	return 0;
}
