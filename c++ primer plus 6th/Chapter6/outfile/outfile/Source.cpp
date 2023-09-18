#include<iostream>
#include<fstream>
using namespace std;

int main() {
	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outfile;
	outfile.open("carinfo.txt");

	cout << "Enter the make and model of automobile:";
	cin.getline(automobile, 50);
	cout << "Enter the model year:";
	cin >> year;
	cout << "Enter the original asking price:";
	cin >> a_price;
	b_price = 0.913*a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios::showpoint);
	cout << "Make and model:" << automobile << endl;
	cout << "year:" << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << b_price << endl;
	
	outfile << fixed;
	outfile.precision(2);
	outfile.setf(ios::showpoint);
	outfile << "Make and model:" << automobile << endl;
	outfile << "year:" << year << endl;
	outfile << "Was asking $" << a_price << endl;
	outfile << "Now asking $" << b_price << endl;

	outfile.close();

	system("pause");
}