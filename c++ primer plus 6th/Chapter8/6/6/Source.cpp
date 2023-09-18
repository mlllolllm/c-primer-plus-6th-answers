#include<iostream>
using namespace std;

template<typename T>
T maxn(T *a, int n);

template<>char* maxn<char *>(char*[], int);

int main() {
	int a[6] = { 1,2,3,4,5,6 };
	double b[4] = { 1,2,3,4 };
	cout << maxn(a, 6) << endl;
	cout << maxn(b, 4) << endl;

	char* arr[5] = { "hello","avada","a","b","c" };
	cout << maxn<char *>(arr, 5) << endl;
	system("pause");
}

template<typename T>
T maxn(T *a, int n) {
	T temp = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > temp)
			temp = a[i];
	}
	return temp;
}

template<>char* maxn<char *>(char*a[], int n) {
	char *b = a[0];
	for (int i = 1; i < n; i++) {
		if (strlen(a[i]) > strlen(b))
			b = a[i];
	}
	return b;
}