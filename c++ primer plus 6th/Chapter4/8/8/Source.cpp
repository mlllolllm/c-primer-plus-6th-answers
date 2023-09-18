#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct Pizza {
	string name;
	double diameter;
	double weight;
};
int main() {
	/*Pizza * p = new Pizza;
	cin >> p->diameter;
	cin.get();
	getline(cin, p->name);
	cin >> p->weight;

	cout << p->name << endl;
	cout << p->diameter << endl;
	cout << p->weight << endl;
	delete p;*/


	char c1, c2;
	c1 = cin.get();
	c2 = cin.get();
	cout << c1 << endl;
	cout << c2 << endl;

	system("pause");
}