#include<iostream>
using namespace std;

int main() {
	double degree, minute, second;
	cout << "Enter a latitude in degrees, minutes, and seconds" << endl;
	cout << "First, enter the degrees: ___\b\b\b";
	cin >> degree;
	cout << "Next ,enter the minutes of arc: _\b";
	cin >> minute;
	cout << "Finally ,enter the seconds of arc: _\b";
	cin >> second;

	double suffix;
	suffix = degree+(minute * 60 + second) / 3600;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << suffix << " degrees" << endl;
	system("pause");
}