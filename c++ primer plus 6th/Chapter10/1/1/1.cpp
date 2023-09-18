#include"1.h"

Count::Count() {
	m_name = "";
	m_account = "";
	m_savings = 0;
}
Count::Count(string name, string account, double savings) {
	m_name = name;
	m_account = account;
	m_savings = savings;
}
void Count::showCount()const {
	cout << "name is:" << m_name << endl;
	cout << "savings is:" << m_savings << endl;
}
void Count::addCount(double savings) {
	m_savings += savings;
	cout << "Operation succeed!\n";
}
void Count::withdrawCount(double savings) {
	if (m_savings - savings >= 0) {
		m_savings -= savings;
		cout << "Operation succeed!\n";
	}
	else {
		cout << "Operation failed!\n";
	}
}