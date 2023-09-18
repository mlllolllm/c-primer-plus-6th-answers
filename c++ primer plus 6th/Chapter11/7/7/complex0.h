#pragma once
#include<iostream>
using namespace std;
class Imaginary {
private:
	double m_rp;
	double m_ip;
public:
	Imaginary(double a=0,double b=0);
	friend Imaginary operator+(Imaginary a1, Imaginary a2);
	friend Imaginary operator-(Imaginary a1, Imaginary a2);
	friend Imaginary operator*(Imaginary a1, Imaginary a2);
	friend Imaginary operator*(double x, Imaginary a2);
	friend Imaginary operator~(Imaginary a1);
	friend ostream & operator<<(ostream & os, Imaginary a);
	friend istream & operator>>(istream & os,  Imaginary& a);
};