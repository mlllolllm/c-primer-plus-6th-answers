#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char fname[20];
	char lname[20];
	char bname[40];
	cout << "Enter your first name:" << endl;
	cin.get(fname, 20).get();
	cout << "Enter your last name:" << endl;
	cin.get(lname, 20).get();
	strcpy_s(bname, lname);
	strcat_s(bname, ",");
	strcat_s(bname, fname);
	cout << "Here's the information in a single string:" << bname << endl;

	system("pause");
}