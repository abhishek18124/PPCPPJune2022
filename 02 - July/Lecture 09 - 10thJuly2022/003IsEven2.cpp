#include<iostream>

using namespace std;

// bool isEven(int n) {
// 	if(n%2 == 0) {
// 		// n is an even no.
// 		return true;
// 	} else {
// 		// n is an odd no.
// 		return false;
// 	}
// }

// bool isEven(int n) {
// 	if(n%2 == 0) {
// 		// n is an even no.
// 		return true;
// 	} 
	
// 	// n is an odd no.
// 	return false;
// }


bool isEven(int n) {
	return n%2 == 0;
}

int main() {

	// bool ans = isEven(4);

	// bool ans;

	// ans = isEven(5);

	// ans ? cout << "true" << endl :
	//       cout << "false" << endl;

	// isEven(6) ? cout << "true" << endl :
	//             cout << "false" << endl;

	cout << isEven(5) << endl;

	return 0;
}




