#include<iostream>

using namespace std;

class creditCard {

	public :

		string bankName;
		string cardNumber;

		creditCard() {
			cout << "I am inside the default constructor of creditCard" << endl;
		}

		creditCard(string bn, string cn) {
			cout << "I am inside the parameterised constructor of creditCard" << endl;
			bankName = bn;
			cardNumber = cn;
		}
};

class customer {

	public :

		string name; // member object
		int age;
		char gender;
		double credits;
		creditCard card; // member object

		customer(string n, int a, char g, double c, string bn, string cn) : card(bn, cn)  {
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
			cout << "Bank Name : " << card.bankName << endl;
			cout << "Card Number : " << card.cardNumber << endl;
		}

};

int main() {

	customer c("Rahul", 20, 'M', 500, "SBI", "1234");

	c.printCustomerInfo();
		
	return 0;
}