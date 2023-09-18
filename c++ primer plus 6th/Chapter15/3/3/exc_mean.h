//#pragma once
//// exc_mean.h  -- exception classes for hmean(), gmean()
//#include <iostream>
//using namespace std;
//
//
//class bas_eror :public logic_error {
//private:
//	double m_tmp1;
//	double m_tmp2;
//public:
//	bas_eror(double tmp1,double tmp2,string fname="Get some problem"):m_tmp1(tmp1),m_tmp2(tmp2),logic_error(fname){}
//};
//class bad_hmean:public bas_eror
//{
//private:
//	double v1;
//	double v2;
//public:
//	bad_hmean(double a = 0, double b = 0) : bas_eror(a,b) {}
//	void mesg();
//};
//
//inline void bad_hmean::mesg()
//{
//	std::cout << "hmean(" << v1 << ", " << v2 << "): "
//		<< "invalid arguments: a = -b\n";
//}
//
//class bad_gmean:public bas_eror
//{
//public:
//	double v1;
//	double v2;
//	bad_gmean(double a = 0, double b = 0) : bas_eror(a, b) {}
//	const char * mesg();
//};
//
//inline const char * bad_gmean::mesg()
//{
//	return "gmean() arguments should be >= 0\n";
//}

//#ifndef EXCEPTION_H_
//#define EXCEPTION_H_
//
//#include <stdexcept>
//#include <string>
//#include <iostream>
//
//class arg_error : public std::logic_error
//{
//private:
//	double arg1;
//	double arg2;
//	std::string fname;
//
//public:
//	arg_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
//		std::string msg = "invalid arguments\n")
//		: logic_error(msg), arg1(a1), arg2(a2), fname(f)
//	{
//	}
//
//	void mesg() const;
//};
//
//class bad_hmean : public arg_error
//{
//public:
//	bad_hmean(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
//		std::string msg = "invalid arguments\n")
//		: arg_error(a1, a2, f, msg)
//	{
//	}
//};
//
//class bad_gmean : public arg_error
//{
//public:
//	bad_gmean(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
//		std::string msg = "invalid arguments\n")
//		: arg_error(a1, a2, f, msg)
//	{
//	}
//};
//
//inline void arg_error::mesg() const
//{
//	std::cout << arg1 << ", " << arg2 << ", " << fname << std::endl;
//}
//
//#endif


#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <stdexcept>
#include <string>
#include <iostream>

class arg_error : public std::logic_error
{
private:
	double arg1;
	double arg2;
	std::string fname;

public:
	arg_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
		std::string msg = "invalid arguments\n")
		: logic_error(msg), arg1(a1), arg2(a2), fname(f)
	{
	}

	void mesg() const;
};

class hmean_error : public arg_error
{
public:
	hmean_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
		std::string msg = "invalid arguments\n")
		: arg_error(a1, a2, f, msg)
	{
	}
};

class gmean_error : public arg_error
{
public:
	gmean_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
		std::string msg = "invalid arguments\n")
		: arg_error(a1, a2, f, msg)
	{
	}
};

inline void arg_error::mesg() const
{
	std::cout << arg1 << ", " << arg2 << ", " << fname << std::endl;
}

#endif
