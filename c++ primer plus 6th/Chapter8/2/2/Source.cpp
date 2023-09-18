#include<iostream>
#include<string>
using namespace std;

struct CandyBar {
	string brand;
	double weight;
	int heat;
};
void CandyBarOperation(CandyBar &a, string b = "Millennium Munch", double c = 2.85, int d = 350);
void CandyBarShow(const CandyBar &a);
int main() {
	CandyBar a;
	CandyBarOperation(a);
	cout << a.weight << endl;
	CandyBarShow(a);
	system("pause");
}

void CandyBarOperation(CandyBar &a, string b, double c, int d) {
	a.brand = b;
	a.weight = c;
	a.heat = d;
}

void CandyBarShow(const CandyBar &a) {
	cout << a.brand << endl;
	cout << a.weight << endl;
	cout << a.heat << endl;
}