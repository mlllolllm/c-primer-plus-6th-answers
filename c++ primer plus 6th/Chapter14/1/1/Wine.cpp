#include"Wine.h"

void Wine::GetBottles() {
	cout << "There are " << num_of_year << " kinds of " << label << " Wines\n";
	cout << "Information input:\n";
	int tempYear, tempNum;
	for (int i = 0; i < num_of_year; i++) {
		cout << "Input year:";
		cin >> tempYear;
		cout << "Input num:";
		cin >> tempNum;
		inf.first()[i] = tempYear;
		inf.second()[i] = tempNum;
	}
}

int Wine::sum() {
	return inf.second().sum();
}

void Wine::Show() {
	std::cout << "Wine: " << label << std::endl;
	std::cout << "Year  " << "  Bottles" << std::endl;
	for (int i = 0; i < num_of_year; ++i)
	{
		std::cout << inf.first()[i] << "    ";
		std::cout << inf.second()[i] << std::endl;
	}
}