// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include<fstream>
#include "vector.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));     // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream file;
	int fre = 1;
	file.open("res.txt");
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		file << "Target distance:" << target << ", ";
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		file << "Step Size:" << dstep << endl;
		cout << "0:(x,y)=" << "(0,0)" << endl;
		while (result.magval() < target)
		{
			cout << fre << ":(x,y)=" << "(" << result.xval() << "," << result.yval() << ")" << endl;
			file << fre << ":(x,y)=" << "(" << result.xval() << "," << result.yval() << ")" << endl;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fre++;
		}
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	/* keep window open
	cin.clear();
	while (cin.get() != '\n')
	continue;
	cin.get();
	*/
	file.close();
	system("pause");
	return 0;
}