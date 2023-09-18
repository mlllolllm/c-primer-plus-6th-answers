#include<iostream>
using namespace std;

double DegreeTransfer(double degree);
int main() {
	cout << "Please enter a Celsius value:";
	double degree;
	cin >> degree;

	double result = DegreeTransfer(degree);

	cout << degree << " degrees Celsius is " << result << " degrees Fahrenheit." << endl;
	system("pause");
}

double DegreeTransfer(double degree) {
	return 1.8*degree + 32;
}