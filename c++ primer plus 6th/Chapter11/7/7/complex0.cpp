#include"complex0.h"

//Imaginary(double a = 0, double b = 0);
//friend Imaginary operator+(Imaginary a1, Imaginary a2);
//friend Imaginary operator-(Imaginary a1, Imaginary a2);
//friend Imaginary operator*(Imaginary a1, Imaginary a2);
//friend Imaginary operator*(double x, Imaginary a2);
//friend Imaginary operator~(Imaginary a1);
//friend ostream & operator<<(operator & os, const Imaginary & a);

Imaginary::Imaginary(double a , double b ) {
	m_rp = a;
	m_ip = b;
}

Imaginary operator+(Imaginary a1, Imaginary a2) {
	Imaginary temp;
	temp.m_rp = a1.m_rp + a2.m_rp;
	temp.m_ip = a1.m_ip + a2.m_ip;
	return temp;
}

Imaginary operator-(Imaginary a1, Imaginary a2) {
	Imaginary temp;
	temp.m_rp = a1.m_rp - a2.m_rp;
	temp.m_ip = a1.m_ip - a2.m_ip;
	return temp;
}

Imaginary operator*(Imaginary a1, Imaginary a2) {
	Imaginary temp;
	temp.m_rp = a1.m_rp*a2.m_rp-a1.m_ip*a2.m_ip;
	temp.m_ip = a1.m_rp*a2.m_ip + a1.m_ip*a2.m_rp;
	return temp;
}

Imaginary operator*(double x, Imaginary a2) {
	Imaginary temp;
	temp.m_rp = x * a2.m_rp;
	temp.m_ip = x * a2.m_ip;
	return temp;
}

Imaginary operator~(Imaginary a1) {
	Imaginary temp;
	temp.m_rp = a1.m_rp;
	temp.m_ip = -a1.m_ip;
	return temp;
}

ostream & operator<<(ostream & os, Imaginary a) {
	os << "(" << a.m_rp << "," << a.m_ip << ")" << endl;
	return os;
}

istream & operator>>(istream & is,  Imaginary &a) {
	cout << "Imaginary:";
	is >> a.m_rp;
	cout << "Real:";
	is >> a.m_ip;
	return is;
}

