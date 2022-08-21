#include<iostream>

using namespace std;

class customer {

		int age;
		
	public :
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

		int getAge() {
			return age;
		}

		void setAge(int a) {
			age = a;
		}

};

int main() {

	customer c("Sumit", 21, 'M', 100);

	// cout << c.age <<< endl;
		
	cout << c.getAge() << endl;

	c.setAge(20);

	cout << c.getAge() << endl;

	return 0;
}