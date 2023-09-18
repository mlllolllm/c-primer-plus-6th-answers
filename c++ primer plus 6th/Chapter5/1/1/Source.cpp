#include<iostream>
using namespace std;

int main() {
	int begin, end,sum=0;
	cout << "Enter two numbers for the beginning and the end:";
	cin >> begin;
	cin >> end;
	for (int i = begin ; i <=end; i++) {
		sum += i;
	}
	cout << sum << endl;

	system("pause");
}