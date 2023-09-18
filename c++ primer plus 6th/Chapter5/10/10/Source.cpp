#include<iostream>
using namespace std;

int main() {
	cout << "Enter number of rows:";
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <num-i-1; j++) {
			cout << '.';
		}
		for (int j = num; j > num-i-1; j--) {
			cout << '*';
		}
		cout << endl;
	}

	system("pause");
}