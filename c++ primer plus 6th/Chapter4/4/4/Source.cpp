#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
	string fname;
	string lname;
	string bname;
	cout << "Enter your first name:" << endl;
	getline(cin,fname);
	cout << "Enter your last name:" << endl;
	getline(cin, lname);
	bname = lname + "," + fname;
	cout << "Here's the information in a single string:" << bname << endl;

	system("pause");
}