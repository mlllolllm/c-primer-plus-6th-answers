// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
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
	int max=0 ,le= 0;
	int min[500] = { 0 };
	double avg = 0;
	int fre = 0;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		if (steps > max)
			max = steps;
		min[fre] = steps;
		fre++;
		avg += steps;
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
	le = min[0];
	for (int i = 1; i < fre; i++) {
		if (min[i] < le)
			le = min[i];
	}
	cout << "Max:" << max << endl;
	cout << "Min:" << le << endl;
	cout << "Avg:" << avg / fre << endl;
	cout << "Bye!\n";
	/* keep window open
	cin.clear();
	while (cin.get() != '\n')
	continue;
	cin.get();
	*/
	system("pause");
	return 0;
}