#include<iostream>
using namespace std;

void showString(const char *);
void showString(const char *, int n);
int main() {
	char a[20] = "Hello world!";
	showString(a);
	showString(a, 20);
	system("pause");
}

void showString(const char *a) {
	for (int i = 0; i < strlen(a); i++) {
		cout << a[i] ;
	}
	cout << endl;
}

void showString(const char *a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < strlen(a); j++) {
			cout << a[j] ;
		}
		cout << endl;
	 }
}