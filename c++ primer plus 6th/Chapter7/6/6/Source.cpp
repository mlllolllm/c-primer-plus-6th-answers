#include<iostream>
using namespace std;

int File_array(double a[], int n);
void Show_array(double a[], int n);
void Reverse_array(double a[], int n);
int main() {
	cout << "Your primary numbers you what to input is:" ;
	int n;
	cin >> n;
	double * arr = new double[n];

	int count = File_array(arr, n);
	Show_array(arr, count);
	Reverse_array(arr, count);
	Show_array(arr, count);

	delete[]arr;
	arr = 0;

	system("pause");
}

int File_array(double a[], int n) {
	int count = 0;
	cout << "Please enter numbers by typeof double:";
	for (int i = 0; i < n; i++) {
		if (!(cin >> a[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Input stop!" << endl;
			break;
		}
		count++;
	}
	cout << "Actually numbers of input is:" << endl;
	return count;
}

void Show_array(double a[], int n) {
	cout << "The numbers are:" << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void Reverse_array(double a[], int n) {
	double temp;
	for (int i = 0,j=n-1; i < j ; ++i,--j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	cout << "Reverse completed!" << endl;
}