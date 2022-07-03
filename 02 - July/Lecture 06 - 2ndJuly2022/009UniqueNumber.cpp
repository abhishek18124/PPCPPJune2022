#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int ans = 0;
	int x;

	for(int i=0; i<n; i++) {
		cin >> x;
		ans = ans ^ x;
	}

	cout << "unique number : " << ans << endl;

	return 0;
}