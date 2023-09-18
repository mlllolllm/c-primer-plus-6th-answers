// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
	Stonewt incognito = 275; // uses constructor to initialize
	Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
	Stonewt taft(21, 8);
	incognito.setModeStone();
	wolfe.setModeStone();
	cout << "The celebrity weighed ";
	cout<<incognito;
	cout << "The detective weighed ";
	cout<< wolfe;
	cout << "The President weighed ";
	cout<<taft;
	incognito = 276.8;      // uses constructor for conversion
	incognito.setModeStone();
	taft = 325;             // same as taft = Stonewt(325);
	cout << "After dinner, the celebrity weighed ";
	cout<<incognito;
	cout << "After dinner, the President weighed ";
	cout<<taft;
	display(taft, 2);
	cout << "The wrestler weighed even more.\n";
	display(422, 2);
	cout << "No stone left unearned\n";
	// std::cin.get();
	system("pause");
	return 0;
}

void display(const Stonewt & st, int n)
{
	Stonewt temp = st;
	temp.setModeStone();
	for (int i = 0; i < n; i++)
	{
		cout << "Wow! ";
		cout<<temp;
	}
}