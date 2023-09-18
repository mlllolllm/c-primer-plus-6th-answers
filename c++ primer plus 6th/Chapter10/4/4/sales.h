#pragma once

#include<iostream>
using namespace std;
class SALES
{
private:
	const static int QUARTERS = 4;
	double m_sales[QUARTERS];
	double m_average;
	double m_max;
	double m_min;
public:
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the 
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales ,if any, set to 0
	SALES();
	SALES(const double ar[], int n);
	// gathers sales for 4 quarters interactively,stores them
	// in the sales member of s and computes and stores the
	// average,maximum,and minimum values
	//void setSales();
	// display all information in structure s
	void showSales()const;
};
