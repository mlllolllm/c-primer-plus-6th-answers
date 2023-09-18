#include<iostream>
#include<new>
using namespace std;

const int BUF = 50;
const int N = 5;
struct chaff {
	char dross[20];
	int slag;
};
int main() {
	chaff a[BUF];
	chaff * p = new (a) chaff[N];
	cout << p << " " << (void *)a << endl;
	cout << "Please enter the information " << N << " times." << endl;
	for (int i = 0; i < N; i++)
	{

		cout << "The information:" << endl;
		cout << "The name:";
		cin.getline(p[i].dross, 20);
		cout << "The slag:";
		cin >> p[i].slag;
		cin.get();
	}

	cout << "Here's the information:" << endl;
	for (int i = 0; i < N; i++) {
		cout << p[i].dross << " " << &p[i].dross << " " << p[i].slag << " " << &p[i].slag << endl;
	}

	system("pause");
}
