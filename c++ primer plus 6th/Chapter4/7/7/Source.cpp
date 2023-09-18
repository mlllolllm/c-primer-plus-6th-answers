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
	Pizza t;
	getline(cin, t.name);
	cin >> t.diameter;
	cin >> t.weight;
	cout << t.name << endl;
	cout << t.diameter << endl;
	cout << t.weight << endl;

	system("pause");
}