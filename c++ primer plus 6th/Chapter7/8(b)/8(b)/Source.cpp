#include<iostream>
using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = { "Spring","Summer","Fall","Winter" };
struct replaceD {
	double arr[Seasons];
};
void fill(replaceD * pa);
void show(replaceD da[]);
int main() {
	replaceD expenses;
	replaceD* t = &expenses;
	fill(t);
	show(t);


	system("pause");
}

void fill(replaceD *pa) {
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa->arr[i];
	}
}

void show(replaceD *da) {
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ":$" << da->arr[i] << endl;
		total += da->arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}