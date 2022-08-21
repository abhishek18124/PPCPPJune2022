#include<iostream>

using namespace std;

class customer {

		string name;
		int age;
		char gender;
		double credits;
		const int id;
	
	public :
	
		customer(int id, string name, int age, char gender, double credits) : id(id) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->credits = credits;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Id : " << id << endl; 
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		// void setName(string name) const { // error
		// 	this->name = name;
		// }

		string getName() const {
			return name;

		}

		int getAge() const {
			return age;
		}

		char getGender() const {
			return gender;
		}

		double getCredits() const {
			return credits;
		}
};


int main() {

	customer c(1, "Riyansh", 20, 'M', 500);
	c.printCustomerInfo();

	return 0;
}