#include<iostream>
#include<utility>

using namespace std;

int main() {

	pair<int, int> p =  make_pair(10, 20); // {10, 20};

	// p = {10, 20}; // make_pair(10, 20)

	// p.first = 10;
	// p.second = 20;

	cout << p.first << " " << p.second << endl;
	
	pair<string, int> p2 = {"hello", 100};

	cout << p2.first << " " << p2.second << endl;

	return 0;
}