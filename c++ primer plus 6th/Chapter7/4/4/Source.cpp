#include<iostream>
using namespace std;

long double rate(long double num, long double p,int a);
int main() {


	system("pause");
}

long double rate(long double num, long double p,int a) {
	long double result = 1.0;
	for (int i = 0; a > 0; num--, a--) {
		result *= (num / p);
	}
	return result;
}