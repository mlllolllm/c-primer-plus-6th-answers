#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class test {
private:
	int m_num;
	static int m_count;
public:
	test();
	test(int n );
	~test();
	void output();
	friend void change(test a);
};

