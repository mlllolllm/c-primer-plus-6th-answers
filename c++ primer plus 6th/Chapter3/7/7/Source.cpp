#include<iostream>
#include<limits.h>
#include<float.h>
using namespace std;

int main() {
	double Eu_style, US_style;

	cout << "Enter the European standard cost(L/100km):";
	cin >> Eu_style;

	US_style = 3.875*62.14 / Eu_style ;

	cout << "The US standard cost is:" << 3.875*62.14 / Eu_style << endl;
	system("pause");
}