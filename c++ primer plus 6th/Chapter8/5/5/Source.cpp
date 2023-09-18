#include<iostream>
using namespace std;

template<typename T>
T max5(T a[5]);
int main() {
	int a[5] = { 1, 2,  3, 4, 5 };
	double b[5] = { 1,  2,  3,  4,  5 };
	cout << max5(a) << endl;
	cout << max5(b) << endl;
	system("pause");
}

template<typename T>
T max5(T a[5]) {
	T temp = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i] > temp)
			temp = a[i];
	}
	return temp;
}