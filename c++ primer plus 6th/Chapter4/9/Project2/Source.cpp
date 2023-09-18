#include<iostream>
#include<string>
using namespace std;

struct CandyBar {
	string brand;
	double weight;
	int calorie;
};
int main() {
	CandyBar * candy = new CandyBar[3];
	getline(cin, candy[0].brand);
	cin >> (*(candy)).weight;
	cin >> (*(candy)).calorie;

	cout << candy[0].brand << endl;

	delete[]candy;

	system("pause");
}