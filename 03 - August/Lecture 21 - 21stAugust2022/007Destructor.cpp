#include<iostream>

using namespace std;

class customer {
	public :
		char* name; // it is allocated memory on the heap
		int age;
		char gender;
		double credits;

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			name = new char[100];
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

		~customer() {
			cout << "I am inside " << name << " 's destructor" << endl; 
			delete [] name;
		}

};

int main() {

	customer c1("Amar", 21, 'M', 100); // parameterised constructor is invoked
	customer c2("Megha", 18, 'F', 200); // parameterised constructor is invoked

	return 0;
}