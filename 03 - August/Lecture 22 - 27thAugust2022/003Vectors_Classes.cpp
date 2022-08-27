#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	int age;
	string name; 
	
	customer(string name, int age) {
		this->age = age;
		this->name = name;
	}	
};

/* 
	return 'true' when a swap isn't required.

*/

bool myComparator(customer a, customer b) {
	// if(a.age < b.age) {
	// 	// we don't need a swap
	// 	return true;
	// } else {
	// 	// we need a swap
	// 	return false;
	// }

	return a.name < b.name;
}

int main() {

	vector<customer> v;

	v.push_back(customer("Akshay", 20));
	v.push_back(customer("Himanshu", 21));
	v.push_back(customer("Megha", 18));
	v.push_back(customer("Sarvesh", 19));
	v.push_back(customer("Deepankar", 22));

	// for(customer c : v) {
	// 	cout << c.name << " " << c.age << endl;
	// }

	// cout << endl;

	sort(v.begin(), v.end(), myComparator);


	for(customer c : v) {
		cout << c.name << " " << c.age << endl;
	}

	cout << endl;

	return 0;
}