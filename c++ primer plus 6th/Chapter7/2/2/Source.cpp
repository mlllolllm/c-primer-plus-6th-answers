#include<iostream>
#include<cctype>
using namespace std;

void input(double arr[], int n);
void showRes(double arr[],int n);
void showAvg(double arr[],int n);
int main() {
	cout << "Please input the count of the numbers(pass in up to ten numbers):";
	int n;
	while (!(cin >> n)||n<=0||n>10) {
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Please enter the right numbers!\n";
		cout << "Reinput:";
	}
	cout << "Please Enter the numbers:";
	double *arr = new double[n];
	input(arr, n);
	showRes(arr,n);
	showAvg(arr,n);
	delete[]arr;
	arr = 0;

	system("pause");
}
void input(double arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void showRes(double arr[],int n) {
	cout << "The input numbers are:";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void showAvg(double arr[],int n) {
	double avg = 0;
	for (int i = 0; i < n; i++) {
		avg += arr[i];
	}
	avg = avg / n;
	cout << "The average achievement is:" << avg << endl;
}