#include"emp.h"

abstr_emp::abstr_emp() {
	fname = "default";
	lname = "default";
	job = "default";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
	const std::string & j):fname(fn),lname(ln),job(j){}

abstr_emp::~abstr_emp() {}

void abstr_emp::ShowAll() const
{
	std::cout << "firstname: " << fname << std::endl;
	std::cout << "lastname: " << lname << std::endl;
	std::cout << "job: " << job << std::endl;
}

void abstr_emp::SetAll() {
	cout << "Enter the first name:";
	getline(cin, fname);
	cout << "Enter the last name:";
	getline(cin, lname);
	cout << "Enter the job:";
	getline(cin, job);
	cout << "Name is:" << lname << " " << fname << ".\n";
	cout << "Job is:" << job << endl;
}


std::ostream & operator<<(std::ostream & os, const abstr_emp &e) {
	os << e.lname << " " << e.fname << endl;
	os << "Job is:" << e.job ;
	return os;
}

employee::employee(){}

employee::employee(const std::string & fn,const std::string &ln,const std::string &j):abstr_emp(fn,ln,j){}

void employee::ShowAll()const {
	abstr_emp::ShowAll();
}

void employee::SetAll() {
	abstr_emp::SetAll();
}

manager::manager():abstr_emp(){}

manager::manager(const std::string & fn, const std::string &ln, const std::string &j,int ico):abstr_emp(fn,ln,j),inchargeof(ico){}

manager::manager(const abstr_emp &e, int ico): abstr_emp(e),inchargeof(ico){}

manager::manager(const manager&m) : abstr_emp(m) {
	inchargeof = m.inchargeof;
}

void manager::ShowAll()const {
	abstr_emp::ShowAll();
	cout << "In_charge_of is:" << inchargeof << endl;
}

void manager::SetAll() {
	abstr_emp::SetAll();
	cout << "Enter your in_charge_of:";
	cin >> inchargeof;
	cout << "Your in_charge_of is:" << inchargeof << endl;
}

fink::fink() :abstr_emp(), reportsto("default") {};

fink::fink(const std::string & fn, const std::string ln,const std::string & j, const std::string rpo):abstr_emp(fn,ln,j),reportsto(rpo){}

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo) {};

fink::fink(const fink&e) :abstr_emp(e) {
	reportsto = e.reportsto;
}

void fink::ShowAll()const {
	abstr_emp::ShowAll();
	cout << "reportsto is" << reportsto << endl;
}

void fink::SetAll() {
	abstr_emp::SetAll();
	cout << "Enter your reportsto:";
	string tmp_rps;
	getline(cin, tmp_rps);
	reportsto = tmp_rps;
	cout << "Your reportsto is:" << reportsto << endl;
}

highfink::highfink():abstr_emp(),manager(),fink(){}

highfink::highfink(const std::string & fn, const std::string & ln,const std::string & j, const std::string & rpo,int ico):abstr_emp(fn,ln,j),manager(fn,ln,j,ico),fink(fn,ln,j,rpo){}

highfink::highfink(const abstr_emp & e, const std::string rpo, int ico):abstr_emp(e),manager(e,ico),fink(e,rpo){}

highfink::highfink(const fink &f,int ico):abstr_emp(f),fink(f),manager((const abstr_emp&)f,ico){}

highfink::highfink(const manager & m, const std::string rpo) :abstr_emp(m),manager(m),fink((const abstr_emp &)m,rpo){}

highfink::highfink(const highfink &h):abstr_emp(h),manager(h),fink(h){}

void highfink::ShowAll()const {
	abstr_emp::ShowAll();
	cout << "In_charge_of is:" << manager::InChargeOf() << endl;
	cout << "Reportsto is:" << fink::ReportsTo() << endl;
}

void highfink::SetAll() {
	abstr_emp::SetAll();
	cout << "Enter your in_charge_of:";
	cin >> manager::InChargeOf();
	cin.get();
	cout << "Your in_charge_of is:" << manager::InChargeOf() << endl;

	cout << "Enter your reportsto:";
	
	getline(cin, fink::ReportsTo());
	cout << "Your reportsto is:" << fink::ReportsTo() << endl;
}


//#include "emp.h"
//
///*******************
//* abstr_emp methods
//*******************/
//abstr_emp::abstr_emp()
//{
//	fname = "none";
//	lname = "none";
//	job = "none";
//}
//
//abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
//	const std::string & j) : fname(fn), lname(ln), job(j)
//{
//}
//
//abstr_emp::~abstr_emp() {}
//
//void abstr_emp::ShowAll() const
//{
//	std::cout << "firstname: " << fname << std::endl;
//	std::cout << "lastname: " << lname << std::endl;
//	std::cout << "job: " << job << std::endl;
//}
//
//void abstr_emp::SetAll()
//{
//	std::cout << "Enter firstname: ";
//	std::getline(std::cin, fname);
//	std::cout << "Enter lastname: ";
//	std::getline(std::cin, lname);
//	std::cout << "Enter job: ";
//	std::getline(std::cin, job);
//}
//
//// friend functions
//std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
//{
//	os << e.lname << " " << e.fname << ", " << e.job;
//	return os;
//}
//
///******************
//* employee methods
//******************/
//employee::employee() {}
//
//employee::employee(const std::string & fn, const std::string & ln,
//	const std::string & j)
//	: abstr_emp(fn, ln, j)
//{
//}
//
//void employee::ShowAll() const
//{
//	abstr_emp::ShowAll();
//}
//
//void employee::SetAll()
//{
//	abstr_emp::SetAll();
//}
//
//
///*****************
//* manager methods
//*****************/
//manager::manager()
//{
//	inchargeof = 0;
//}
//
//
//manager::manager(const std::string & fn, const std::string & ln,
//	const std::string & j, int ico)
//	: abstr_emp(fn, ln, j), inchargeof(ico)
//{
//}
//
//manager::manager(const abstr_emp & e, int ico)
//	: abstr_emp(e)
//{
//	inchargeof = ico;
//}
//
//manager::manager(const manager & m)
//	: abstr_emp(m)
//{
//	inchargeof = m.inchargeof;
//}
//
//void manager::ShowAll() const
//{
//	abstr_emp::ShowAll();
//	std::cout << "Inchargeof: " << inchargeof << std::endl;
//}
//
//void manager::SetAll()
//{
//	abstr_emp::SetAll();
//	std::cout << "Enter inchargeof: ";
//	std::cin >> inchargeof;
//	std::cin.get();
//}
//
///**************
//* fink methods
//**************/
//fink::fink()
//{
//	reportsto = "none";
//}
//
//fink::fink(const std::string & fn, const std::string ln,
//	const std::string & j, const std::string rpo)
//	: abstr_emp(fn, ln, j), reportsto(rpo)
//{
//}
//
//fink::fink(const abstr_emp & e, const std::string & rpo)
//	: abstr_emp(e), reportsto(rpo)
//{
//}
//
//fink::fink(const fink & f)
//	: abstr_emp(f)
//{
//	reportsto = f.reportsto;
//}
//
//void fink::ShowAll() const
//{
//	abstr_emp::ShowAll();
//	std::cout << "Reportsto: " << reportsto << std::endl;
//}
//
//void fink::SetAll()
//{
//	abstr_emp::SetAll();
//	std::cout << "Enter reportsto: ";
//	std::getline(std::cin, reportsto);
//}
//
///******************
//* highfink methods
//******************/
//highfink::highfink() {}
//
//highfink::highfink(const std::string & fn, const std::string & ln,
//	const std::string & j, const std::string & rpo,
//	int ico)
//	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
//{
//}
//
//highfink::highfink(const abstr_emp & e, const std::string rpo, int ico)
//	: abstr_emp(e), manager(e, ico), fink(e, rpo)
//{
//}
//
//highfink::highfink(const fink & f, int ico)
//	: abstr_emp(f), fink(f), manager((const abstr_emp &)f, ico)  // ????
//{
//}
//
//highfink::highfink(const manager & m, const std::string rpo)
//	: abstr_emp(m), manager(m), fink((const abstr_emp &)m, rpo)
//{
//}
//
//highfink::highfink(const highfink & h)
//	: abstr_emp(h), manager(h), fink(h)
//{
//}
//
//void highfink::ShowAll() const
//{
//	abstr_emp::ShowAll();
//	std::cout << "Inchargeof: " << manager::InChargeOf() << std::endl;
//	std::cout << "Reportsto: " << fink::ReportsTo() << std::endl;
//}
//
//void highfink::SetAll()
//{
//	abstr_emp::SetAll();
//	std::cout << "Enter reportsto: ";
//	std::getline(std::cin, fink::ReportsTo());
//	std::cout << "Enter Inchargeof: ";
//	std::cin >> manager::InChargeOf();
//	std::cin.get();
//}
