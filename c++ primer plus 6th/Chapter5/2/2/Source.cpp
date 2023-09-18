#include<iostream>
#include<array>
using namespace std;

int main() {
	array<long double, 1000> giant;
	giant[0] = 1, giant[1] = 1;
	for (int i = 1; i <= 100; i++) {
		giant[i] = i*giant[i-1];
	}
	cout << giant[100] << endl;

	system("pause");
}