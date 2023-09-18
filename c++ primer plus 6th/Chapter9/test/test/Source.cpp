#include<iostream>
#include"Header.h"
using namespace std;

//extern const int num = 1;

int main_1() {
	int a = 1, b = 2;
	show(num, b);

	system("pause");
	return 0;
}

void show(int a, int b) {
	static int c = a;
	cout << a << " " << c << endl;
}
