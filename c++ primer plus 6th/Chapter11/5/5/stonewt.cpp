// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;    // integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::setModeStone() {
	m_a = Stone;
}

void Stonewt::setModeIntpounds() {
	m_a = intPounds;
}

void Stonewt::setModeDoublepounds() {
	m_a = doublePounds;
}

// show weight in stones
ostream & operator<<(ostream & os,Stonewt a) {
	if (a.m_a == 1) {
		os<< a.stone << " stone, " << a.pds_left << " pounds\n";
		return os;
	}
	if (a.m_a == 2) {
		os << (int)a.pounds << " pounds\n";
		return os;
	}
	if (a.m_a == 3) {
		os << a.pounds << " pounds\n";
		return os;
	}
}

Stonewt operator + (Stonewt s1, Stonewt s2) {
	Stonewt s3;
	s3.stone = s1.stone + s2.stone + (s1.pds_left + s2.pds_left) / 14;
	s3.pds_left = (s1.pds_left + s2.pds_left) - (int)((s1.pds_left + s2.pds_left) / 14) * 14;
	s3.pounds = s1.pounds + s2.pounds;
	return s3;
}

Stonewt operator - (Stonewt s1, Stonewt s2) {
	Stonewt s3;
	if (s1.pds_left > s2.pds_left) {
s3.stone = s1.stone - s2.stone;
s3.pds_left = s1.pds_left - s2.pds_left;
	}
		
	else {
		s3.stone = s1.stone - s2.stone - 1;
		s3.pds_left = s1.pds_left + 14 - s2.pds_left;
	}
		
	s3.pounds = s1.pounds - s2.pounds;
	return s3;
}

Stonewt operator * (Stonewt s1, Stonewt s2) {
	Stonewt s3;
	s3.pounds = s1.pounds*s2.pounds;
	return s3;
}