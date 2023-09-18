#include<iostream>
#include<string>
using namespace std;

int main() {
	const int MONTHS = 12;
	string SalesVolume[3][MONTHS ] = { 
		{ "fir January","fir February","fir March","fir April", "fir May","fir June","fir July","fir August","fir September","fir October","fir November","fir December" },
	    {"sec January", "sec February", "sec March", "sec April", "sec May", "sec June", "sec July", "sec August", "sec September", "sec October", "sec November", "sec December" },
		{ "thr January","thr February","thr March","thr April", "thr May","thr June","thr July","thr August","thr September","thr October","thr November","thr December" },
};
	int num[3][MONTHS ];
	int sum = 0;
	cout << "请输入每个月的销售量" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < MONTHS; j++) {
              cout << SalesVolume[i][j] << ":";
		        cin >> num[i][j];
		     sum += num[i][j];
		}
		
	}
	cout << "The sum sales volume is:" << " " << sum << endl;

	system("pause");
}