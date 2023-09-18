#pragma once
#include<iostream>
#include<string>
using namespace std;
class Count{
private:
	string m_name;
	string m_account;
	double m_savings;
public:
	Count();
	Count(string name, string account, double savings);
	void showCount()const;
	void addCount(double savings);
	void withdrawCount(double savings);
};