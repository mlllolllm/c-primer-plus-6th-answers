#include<iostream>
using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = { "Spring","Summer","Fall","Winter" };
void fill(double * pa);
void show(double da[]);
int main() {
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	

	system("pause");
}

void fill(double *pa) {
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa[i];
	}
}

void show(double da[]) {
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ":$" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}