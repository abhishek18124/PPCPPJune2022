#include<iostream>

using namespace std;

class customer {

	public :
		int age;
		char name[100];
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor" << endl;
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			strcpy(name, n);
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

		bool operator<(customer c) {
			// if(credits < c.credits) {
			// 	return true;
			// }
			// return false;

			return credits < c.credits;
		}

};

int main() {

	customer c1("Deepankar", 20, 'M', 5000);

	customer c2("Sarvesh", 21, 'M', 500);

	if(c1 < c2) { // c1.operator<(c2)
		cout << c1.name << " has less credits than " << c2.name << endl;
	} else {
		cout << c1.name << " has more credits than " << c2.name << endl;
	}

	return 0;
	
}