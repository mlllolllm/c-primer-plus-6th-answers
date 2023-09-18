#include"port.h"

Port::Port(const char * br , const char * st , int b) {
	char *temp1 = new char[strlen(br) + 1];
	strcpy(temp1, br);
	brand = temp1;
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & p) {
	char *temp1 = new char[strlen(p.brand) + 1];
	strcpy(temp1, p.brand);
	brand = temp1;
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p) {
	char *temp1 = new char[strlen(p.brand) + 1];
	strcpy(temp1, p.brand);
	brand = temp1;
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b) {
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b) {
	bottles -= b;
	return *this;
}

void Port::Show()const {
	cout << "Brand:" << brand << endl;
	cout << "Kind:" << style << endl;
	cout << "Bottles:" << bottles << endl;
}

ostream & operator<<(ostream &os, const Port & p) {
	os << p.brand << "," << p.style << "," << p.bottles ;
	return os;
}

//VintagePort
VintagePort::VintagePort(const char * br , int b , const char * nn , int y ):Port( br , "vintage"  , b ) {
	char *temp1 = new char[strlen(nn) + 1];
	strcpy(temp1, nn);
	nickname = temp1;
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port( vp) {
	char *temp1 = new char[strlen(vp.nickname) + 1];
	strcpy(temp1, vp.nickname);
	nickname = temp1;
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp) {
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete[]nickname;
	char *temp1 = new char[strlen(vp.nickname) + 1];
	strcpy(temp1, vp.nickname);
	nickname = temp1;
	year = vp.year;
}

void VintagePort::Show() const{
	Port::Show();
	cout << "nickname:" << nickname << endl;
	cout << "year:" << year << endl;
}

ostream & operator<<(ostream &os,const VintagePort & vp){
	os << (const Port &)vp;
	os << vp.nickname << "," << vp.year ;
	return os;
}