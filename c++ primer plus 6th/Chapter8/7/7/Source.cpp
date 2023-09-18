#include<iostream>
using namespace std;


struct debts {
	char name[50];
	double amount;
};
template<typename T>
void SumArray(T arr[], int n);

template<typename T>
void SumArray(T * arr[], int n);

template<>void SumArray<debts>(debts * arr[], int n);

int main() {
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] = {
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0}
	};
	debts* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i];

	SumArray(things, 6);
	SumArray<debts>(pd, 3);
	system("pause");
}

template<typename T>
void SumArray(T arr[], int n) {
	T sum=0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << sum << endl;
}

template<>void SumArray<debts>(debts * arr[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (*arr)[i].amount;
	}
	cout << sum << endl;
}