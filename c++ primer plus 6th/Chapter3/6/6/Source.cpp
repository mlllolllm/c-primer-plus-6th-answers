#include<iostream>

using namespace std;

int main() {
	double distance,consumption;
	cout << "Enter the distance(km):";
	cin >> distance;
	cout << "Enter the consumption of the oil(L):";
	cin >> consumption;
	double result = consumption/(distance/100);
	cout << "The consuption/hundred km is " << result<<endl;
	
	system("pause");
}