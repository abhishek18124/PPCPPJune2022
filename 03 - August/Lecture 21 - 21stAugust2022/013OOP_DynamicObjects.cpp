#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;

		customer() {
			cout << "\ninside default constructor of \'customer\' class\n";
		}

		customer(string n, int a, char g, double c) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			name = n;
			age = a;
			gender = g;
			credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};


int main() {

	customer* cptr1 = new customer;

	cptr1->name = "Himanshu";
	cptr1->age = 20;
	cptr1->gender = 'M';
	cptr1->credits = 100;

	cptr1->printCustomerInfo();

	// customer* cptr = new customer("Shubham", 21, 'M', 1000);

	// cout << "Name : " << cptr->name << endl;
	// cout << "Age : " << cptr->age << endl;
	// cout << "Gender : " << cptr->gender << endl;
	// cout << "Credits : " << cptr->credits << endl;

	// cptr->printCustomerInfo();

	return 0;
}