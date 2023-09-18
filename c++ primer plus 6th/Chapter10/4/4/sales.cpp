#include"sales.h"

SALES::SALES() {
	double max, min, total = 0;
	int n = 4;
	std::cout << "Please enter the sales:" << std::endl;
	std::cout << "First:";
	std::cin >> m_sales[0];
	std::cout << "Second:";
	std::cin >> m_sales[1];
	std::cout << "Third:";
	std::cin >> m_sales[2];
	std::cout << "Fourth:";
	std::cin >> m_sales[3];
	max = m_sales[0];
	min = m_sales[0];
	total += m_sales[0];
	for (int i = 1; i < n; i++) {
		if (m_sales[i] > max)
			max = m_sales[i];
		if (m_sales[i] < min)
			min = m_sales[i];
		total += m_sales[i];
	}
	m_max = max;
	m_min = min;
	std::cout << total << std::endl;
	m_average = total / n;

}

SALES::SALES(const double ar[], int n) {
	double max = ar[0], min = ar[0], total = ar[0];
	for (int i = 1; i < n; i++) {
		if (ar[i] > max)
			max = ar[i];
		if (ar[i] < min)
			min = ar[i];
		total += ar[i];
		m_sales[i] = ar[i];
	}
	m_max = max;
	m_min = min;
	m_average = total / n;
	for (int i = 0; i < 4; i++) {
		m_sales[i] = 0;
	}
}



void SALES::showSales()const {
	std::cout << "The sales are:" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << m_sales[i] << " ";
	std::cout << std::endl;
	std::cout << "The max num is:" << m_max << std::endl;
	std::cout << "The min is:" << m_min << std::endl;
	std::cout << "The avg num is:" << m_average << std::endl;
}