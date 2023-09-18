#pragma once
#include<iostream>
using namespace std;



class test {
private:
	int m_num;
public:
	test();
	~test();
	void showNum();
};


class testplus :public test {
private:
	int m1_num;
public:
	//testplus();
	~testplus();
	void showNum();
};