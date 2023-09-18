#include<iostream>
using namespace std;

int main() {
	char fName[20], lName[20];
	char Lgrade;
	int age;
	cout << "What is your first name?";
	cin.get(fName,20).get();
	cout << "What is your last name?";
	cin >> lName;
	cout << "What letter grade do you deserve?";
	cin >> Lgrade;
	cout << "What is your age?";
	cin >> age;
	cout << "Name:" << lName << " " << fName << endl;
	cout << "Grade:" << Lgrade << endl;
	cout << "Age:" << age<<endl;


	system("pause");
}