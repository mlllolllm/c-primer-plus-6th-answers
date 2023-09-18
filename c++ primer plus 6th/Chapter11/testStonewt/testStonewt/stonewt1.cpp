#include"stonewt1.h"

Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs-(int)lbs;
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stn*Lbs_per_stn+lbs;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {

}

void Stonewt::show_stn()const {
	cout << stone << " stone, " << pds_left << " pounds.\n";
}

void Stonewt::show_lbs()const {
	cout << pounds << " pounds\n";
}

Stonewt::operator int()const {
	return int(pounds + 0.5);
}

Stonewt::operator double()const {
	return pounds;
}

Stonewt Stonewt::operator*(double a)const {
	Stonewt temp;
	temp.pounds = pounds*a + (int)((pds_left*a) / 14);
	temp.pds_left = pds_left*a - (int)((pds_left*a) / 14) * 14;
	return temp;
}

Stonewt operator*(double a, Stonewt n) {
	Stonewt temp;
	temp.pounds = n.pounds*a + (int)((n.pds_left*a) / 14);
	temp.pds_left = n.pds_left*a - (int)((n.pds_left*a) / 14) * 14;
	return temp;
}