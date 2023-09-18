#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

int main() {
	//test a(5);
	//test b = a;

	//char a1[50] = "Hello";
	//char *a2;
	//a2 = a1;
	//char *a3;
	//a3 = a2;
	//cout << a3 << endl;

	char a1[50] = "Hello";
	int len = strlen(a1);
	cout << len << endl;
	char *a2 = new char[len + 1];
	strcpy(a2, a1);
	cout << a1 << endl;
	cout << a2[0] << endl;
	cout << a2[1] << endl;
	cout << a2[5] << endl;
	cout << a2 << endl;
	cout << *a2 << endl;
	delete[]a2;
	system("pause");
}