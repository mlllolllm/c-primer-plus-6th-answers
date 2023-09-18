#include<iostream>
using namespace std;

int main() {
	int x = 10;
	int y = 23;
	int &&r1 = 13;
	int &&r2 = x + y;


	cout << r1 << " " << r2 << endl;

	system("pause");
}