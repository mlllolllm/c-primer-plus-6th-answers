#include<iostream>
using namespace std;

template<typename T>
void c(T &a, T&b);

//inline double square(double a) { return a*a; }
int main() {
	double a = 3.1;
	double b = 1.2;
	int d = 3;
	c(a, d);
	cout << a << endl;
	cout << b << endl;

	system("pause");
}

template<typename T>
void c(T&a, T&b) {
	T temp = a;
	a = b;
	b = temp;

}