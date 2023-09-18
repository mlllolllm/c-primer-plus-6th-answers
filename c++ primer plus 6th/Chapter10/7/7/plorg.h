#pragma once
#include<iostream>
using namespace std;
class Plorg {
private:
	char m_name[19];
	int m_CI;
public:
	Plorg(char*name="Plorga", int CI = 19);
	void show()const;
	void changeCI(int n);

};