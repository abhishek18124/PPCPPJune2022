#include<iostream>

using namespace std;

class customer {

	public :

		char name[100];
		int age;
		char gender;
		double credits;

		void printCustomerInfo() {

			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Credits : " << credits << endl;
			cout << "Gender : " << gender << endl;

		}


};

void printCustomerInfo(customer c) {

	cout << "\nCustomer Information\n";
	cout << "Name : " << c.name << endl;
	cout << "Age : " << c.age << endl;
	cout << "Credits : " << c.credits << endl;
	cout << "Gender : " << c.gender << endl;

}

int main() {

	customer c1;

	strcpy(c1.name, "Naman");
	c1.age = 20;
	c1.credits = 100;
	c1.gender = 'M';

	// cout << "\nCustomer Information\n";
	// cout << "Name : " << c1.name << endl;
	// cout << "Age : " << c1.age << endl;
	// cout << "Credits : " << c1.credits << endl;
	// cout << "Gender : " << c1.gender << endl;

	// printCustomerInfo(c1);

	c1.printCustomerInfo();

	customer c2;

	strcpy(c2.name, "Gracy");
	c2.age = 18;
	c2.credits = 500;
	c2.gender = 'F';

	// cout << "\nCustomer Information\n";
	// cout << "Name : " << c2.name << endl;
	// cout << "Age : " << c2.age << endl;
	// cout << "Credits : " << c2.credits << endl;
	// cout << "Gender : " << c2.gender << endl;

	// printCustomerInfo(c2);

	c2.printCustomerInfo();

	return 0;
}