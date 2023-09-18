#include<iostream>
using namespace std;

int main() {
	const double num = 0.0254;
	cout << "Enter your height(unit:inches):";
	double height;
	cin >> height;
	cout << "Your height is:" << height*num << endl;
	system("pause");
}