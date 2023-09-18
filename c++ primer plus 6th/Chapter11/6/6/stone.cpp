// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
	int temp;
	Stonewt t[6] = { {128},{256},{512} };
	cout << "Define the remaining objects:\n";
	for (int i = 0; i < 3; i++) {
		cin >> temp;
		t[i+3] = Stonewt(temp);
	}
	int min = t[0].returnPounds();
	int max= t[0].returnPounds();
	int total=0;
	Stonewt comp(11);
	for (int i = 0; i < 6; i++) {
		if (t[i].returnPounds() < min)
			min = t[i].returnPounds();
		if (t[i].returnPounds() > max) {
			max = t[i].returnPounds();
		}
		if (t[i] >= comp)
			total++;
	}
	cout << "Max:" << max << endl;
	cout << "Min:" << min << endl;
	cout << "The num>=11:" << total << endl;
	// std::cin.get();
	system("pause");
	return 0;
}

void display(const Stonewt & st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Wow! ";
		st.show_stn();
	}
}