#include<iostream>
using namespace std;

void Output(int hours, int minutes);
int main() {
	cout << "Enter the number of hours:";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes:";
	int minutes;
	cin >> minutes;
	Output(hours, minutes);

	system("pause");
}

void Output(int hours, int minutes) {
	cout << "Time: " << hours << ":" << minutes << endl;
}