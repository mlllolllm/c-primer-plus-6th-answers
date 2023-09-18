#include"stack.h"

int main() {
	cout << "num:";
	int n;
	cin >> n;
	cin.get();
	customer *num = new customer[n];
	for (int i = 0; i < n; i++) {
		cout << "Input fullname:";
		cin.getline(num[i].fullname, 35);
		cout << "Input payment:";
		cin >> num[i].payment;
		cin.get();
	}

	Stack test;
	bool res;
	for (int i = 0; i < n; i++) {
		res=test.push(num[i]);
	}
	for (int i = 0; i < n; i++) {
		res=test.pop(num[i]);
	}
	system("pause");
}