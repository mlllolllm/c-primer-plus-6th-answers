#pragma once
// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include<iostream>
using namespace std;
class Stonewt
{
private:
	enum mode{ Lbs_per_stn = 14,intPounds=2,doublePounds=3,Stone=1 }; 
	mode m_a=doublePounds;// pounds per stone
	int stone;                    // whole stones
	double pds_left;              // fractional pounds
	double pounds;                // entire weight in pounds
public:
	Stonewt(double lbs);          // constructor for double pounds
	Stonewt(int stn, double lbs); // constructor for stone, lbs
	Stonewt();                    // default constructor
	~Stonewt();
	void show_lbs(mode a) const;        // show weight in pounds format
	void show_stn(mode a) const; 
	void setModeStone();// show weight in stone format
	void setModeIntpounds();
	void setModeDoublepounds();
	friend ostream & operator<<(ostream & os,Stonewt a);
	friend Stonewt operator+(Stonewt s1,Stonewt s2);
	friend Stonewt operator-(Stonewt s1, Stonewt s2);
	friend Stonewt operator*(Stonewt s1, Stonewt s2);
};
#endif