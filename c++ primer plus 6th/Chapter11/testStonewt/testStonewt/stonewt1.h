#pragma once
#ifndef STONEWT1_H_
#define STONEWT1_H_
#include<iostream>
using namespace std;

class Stonewt {
private:
	enum{Lbs_per_stn=14};
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	void show_lbs()const;
	void show_stn()const;
	operator int()const;
	operator double()const;
	Stonewt operator*(double a)const;
	friend Stonewt operator*(double a, Stonewt n);
};
#endif // !STONEWT1_H_
