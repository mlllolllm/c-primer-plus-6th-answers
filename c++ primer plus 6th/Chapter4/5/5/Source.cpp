#include<iostream>
#include<string>
using namespace std;

struct Candybar {
	string brand;
	double weight;
	int calio;
};
int main() {
	Candybar snack = { "Mocha Munch",2.3,350 };
	cout << "The information of the snack is below:\n";
	cout << snack.brand << endl;
	cout << snack.weight << endl;
	cout << snack.calio << endl;

	system("pause");
}