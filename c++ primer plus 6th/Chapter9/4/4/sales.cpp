#include"sales.h"
//using namespace SALES;

void SALES::setSales(Sales & s, const double ar[], int n) {
	double max =ar[0], min = ar[0], total=ar[0];
	for (int i = 1; i < n; i++) {
		if (ar[i] > max)
			max = ar[i];
		if (ar[i] < min)
			min = ar[i];
		total += ar[i];
		s.sales[i] = ar[i];
	}
	s.max = max;
	s.min = min;
	s.average = total / n;
	for (int i = 0; i < 4; i++) {
		s.sales[i] = 0;
	}
}

void SALES::setSales(Sales & s) {
	double max , min , total = 0;
	int n = 4;
	std::cout << "Please enter the sales:"<<std::endl;
	std::cout << "First:";
	std::cin >> s.sales[0];
	std::cout << "Second:";
	std::cin >> s.sales[1];
	std::cout << "Third:";
	std::cin >> s.sales[2];
	std::cout << "Fourth:";
	std::cin >> s.sales[3];
	max = s.sales[0];
	min = s.sales[0];
	total += s.sales[0];
	for (int i = 1; i < n; i++) {
		if (s.sales[i] > max)
			max = s.sales[i];
		if (s.sales[i] < min)
			min = s.sales[i];
		total += s.sales[i];
	}
	s.max = max;
	s.min = min;
	std::cout << total << std::endl;
	s.average = total / n;
	
}

void SALES::showSales(const Sales & s) {
	std::cout << "The sales are:" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << s.sales[i] << " ";
	std::cout << std::endl;
	std::cout << "The max num is:" << s.max << std::endl;
	std::cout << "The min is:" << s.min << std::endl;
	std::cout << "The avg num is:" << s.average << std::endl;
}