#include<iostream>
using namespace std;

double avg(double, double);
int main() {
	cout << "Enter two numbers till one of them is 0:";
	double a, b;
	while (cin >> a >> b&&a != 0 && b != 0) {
		double res = avg(a, b);
		cout << "The average is:" << res << endl;
	}

	system("pause");
}

double avg(double x, double y) {
	return 2.0*x*y / (x + y);
}