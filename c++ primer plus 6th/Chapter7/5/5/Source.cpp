#include<iostream>
using namespace std;

long long factorial(int a);
int main() {
	int b;
	cin >> b;
	long long res = factorial(b);
	cout << res << endl;
	system("pause");
}

long long factorial(int a) {
	int sum = a;
	if (a > 1) {
        sum *= factorial(a - 1);
	}
	
	return sum;
}