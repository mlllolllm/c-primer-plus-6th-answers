#include<iostream>
#include<cctype>
using namespace std;

int main() {
	int num;
	double tax;
	while (cin>>num&&num>=0) {
		if (num >= 35000) {
			tax = (num - 35000)*0.2 + 20000 * 0.15 + 10000 * 0.1 + 5000 * 0;
		}
		else if (num > 15000 && num < 35000) {
			tax = (num - 15000)*0.15 + 10000 * 0.10 + 5000 * 0;
		}
		else if (num > 5000 && num < 15000) {
			tax = (num - 5000)*0.1 + 0;
		}
		else if (num <= 5000) {
			tax = 0;
		}
		cout << "The tax is " << tax << endl;
	}

	system("pause");
}
