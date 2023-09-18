#include<iostream>
#include<cstring>
using namespace std;

struct stringy {
	char * str;
	int ct;
};

void set(stringy &, char *);
void show(stringy a);
void show(char *a);
void show(stringy a, int n);
void show(char *a, int n);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	system("pause");
	return 0;
}

void set(stringy &a, char *b) {
	char * t = new char[strlen(b)];
	strcpy_s(t,strlen(b)+1, b);
	a.str = t;
	a.ct = strlen(b);
}

void show(stringy a) {
	cout << a.str << endl;
}

void show(char *a) {
	cout << a << endl;
}

void show(stringy a, int n) {
	cout << a.str[n-1] << endl;
}

void show(char *a, int n) {
	cout << a[n-1] << endl;
}