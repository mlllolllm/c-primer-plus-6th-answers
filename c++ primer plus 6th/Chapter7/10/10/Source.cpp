#include<iostream>
#include<string>
using namespace std;

double calculate(double a, double b, double(*p)(double x, double y));
double add(double x, double y);
double subtract(double x, double y);
int main() {
	double(*p[2])(double x, double y) = { add,subtract };
	cout << "Please enter two numbers:";
	double a, b;
	while (cin >> a&&cin >> b) {
		cout << "Enter the calculte methods:";
		cin.get();
		string method;
		getline(cin, method);
		cout << "The result is:";
		if (method == "add") {
			cout << calculate(a, b, add) << endl;
		}
		else if (method == "subtract") {
			cout << calculate(a, b, subtract) << endl;
		}
		cout << "Please enter two numbers:";
	}
	
	system("pause");
}

double calculate(double a, double b, double(*p)(double c, double d)) {
	return (*p)(a, b);
}

double add(double x, double y) {
	return x + y;
}
double subtract(double x, double y) {
	return x - y;
}