#include<iostream>
using namespace std;

int main() {
	int num, days, hours, minutes, seconds;
	cout << "Enter the number of seconds:";
	cin >> num;
	days = num / (60 * 60 * 24);
	int days_re = num % (60 * 60 * 24);
	hours = days_re / (60 * 60);
	int hours_re = days_re % (60 * 60);
	minutes = hours_re / 60;
	seconds = hours_re % 60;

	cout << num << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds, " << endl;
	system("pause");
}