#include"Wine.h"

void Wine::GetBottles() {
	cout << "There are " << num_of_year << " kinds of " << (string &)(*this) << " Wines\n";
	cout << "Information input:\n";
	int tempYear, tempNum;
	for (int i = 0; i < num_of_year; i++) {
		cout << "Input year:";
		cin >> tempYear;
		cout << "Input num:";
		cin >> tempNum;
		PairArray::first()[i] = tempYear;
		PairArray::second()[i] = tempNum;
	}
}

int Wine::sum() {
	return PairArray::second().sum();
}

void Wine::Show() {
	std::cout << "Wine: " << (string &)(*this) << std::endl;
	std::cout << "Year  " << "  Bottles" << std::endl;
	for (int i = 0; i < num_of_year; ++i)
	{
		std::cout << PairArray::first()[i] << "    ";
		std::cout << PairArray::second()[i] << std::endl;
	}
}