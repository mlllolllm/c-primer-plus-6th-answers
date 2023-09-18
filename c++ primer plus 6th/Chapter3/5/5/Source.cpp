#include<iostream>
using namespace std;

int main() {
	
	
	cout << "Enter the world's population:";
	long long worldPo;
	cin >> worldPo;
	cout << "Enter the population of the US:";
	long long USPo;
	cin >> USPo;
	double ratio = (double)USPo / (double)worldPo*100;
	cout << ratio;
	cout << "The population of the US is " << ratio << "% of the world population." << endl;
	
	system("pause");
}