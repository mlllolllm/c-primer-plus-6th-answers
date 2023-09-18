#include<iostream>
#include<string>
using namespace std;

int main() {
	const int MONTHS = 12;
	string SalesVolume[MONTHS+1] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	int num[MONTHS+1];
	int sum = 0;
	cout << "请输入每个月的销售量" << endl;
	for (int i = 0; i < MONTHS; i++) {
		cout<< SalesVolume[i]<<":";
		cin >> num[MONTHS];
		sum += num[MONTHS];
	}
	cout << "The sum sales volume is:" << " " << sum << endl;

	system("pause");
}