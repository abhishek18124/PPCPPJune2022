#include<iostream>

using namespace std;

int main() {

	int B[] = {10, 20, 30, 40, 50};

	int A[][4] = {{10, 20, 30, 40}, // row is optional
				   {50, 60, 70, 80},
				   {90, 100}};


	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
  

	return 0;
}