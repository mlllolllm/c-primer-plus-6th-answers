////error4.cpp ¨C using exception classes
//#include <iostream>
//#include <cmath> // or math.h, unix users may need -lm flag
//#include "exc_mean.h"
//// function prototypes
//double hmean(double a, double b);
//double gmean(double a, double b);
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double x, y, z;
//
//	cout << "Enter two numbers: ";
//	while (cin >> x >> y)
//	{
//		try {                  // start of try block
//			z = hmean(x, y);
//			cout << "Harmonic mean of " << x << " and " << y
//				<< " is " << z << endl;
//			cout << "Geometric mean of " << x << " and " << y
//				<< " is " << gmean(x, y) << endl;
//			cout << "Enter next set of numbers <q to quit>: ";
//		}// end of try block
//		catch (bad_hmean & bg)    // start of catch block
//		{
//			bg.mesg();
//			//cout << "Try again.\n";
//			break;;
//		}
//		catch (bad_gmean & hg)
//		{
//			hg.mesg();
//			/*cout << "Values used: " << hg.v1 << ", "
//				<< hg.v2 << endl;
//			cout << "Sorry, you don't get to play any more.\n";*/
//			break;
//		} // end of catch block
//	}
//	cout << "Bye!\n";
//	// cin.get();
//	// cin.get();
//	system("pause");
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw bad_hmean(a, b);
//	return 2.0 * a * b / (a + b);
//}
//
//double gmean(double a, double b)
//{
//	if (a < 0 || b < 0)
//		throw bad_gmean(a, b);
//	return std::sqrt(a * b);
//}



//error4.cpp ¨C using exception classes
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exc_mean.h"
// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try {                  // start of try block
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}// end of try block
		catch (hmean_error & he)    // start of catch block
		{
			he.mesg();
			cout << he.what();
			cout << "Try again.\n";
			continue;
		}
		catch (gmean_error & ge)
		{
			ge.mesg();
			cout << "Sorry, you don't get to play any more.\n";
			break;
		} // end of catch block
		catch (arg_error & ae)
		{
			ae.mesg();
			cout << "Sorry, you don't get to play any more.\n";
			break;
		}
	}
	cout << "Bye!\n";
	// cin.get();
	// cin.get();
	system("pause");
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw hmean_error(a, b, "hmean()");
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw gmean_error(a, b, "gmean()");
	return std::sqrt(a * b);
}