#include<iostream>
#include<cstring>
#include<array>
#include<vector>
using namespace std;

char * getnameChar();
int * getInt();
void testInt();
struct whichYear {
	int year;
};
int main() {
	/*char * name;

	name = getname();
	cout << name << " " << (int *)name << endl;
	delete [] name;*/

	//char * test=  "test";
	//char * copy;
	//copy = test;
	//cout << copy << endl;
	
	//testInt();

	//int * numTest ;
	//numTest = getInt();
	//cout << numTest[0] << endl;
	//delete []numTest;

	whichYear s01, s02, s03;
	s01.year = 1998;
	whichYear * yt = &s02;
	yt->year = 1999;
	whichYear ay[3];
	ay[0].year = 1998;
	whichYear * py[3] = { &s01,&s02,&s03 };
	whichYear **ppy1 = py;
	auto ppy2 = py;
	(*ppy1)->year = 1988;
	(*(ppy2 + 1))->year = 1989;
	cout << s01.year << endl;
	cout << yt->year << endl;
	cout << py[0]->year << endl;

	vector<int> vi = { 1,2,3,4 };
	vector<int> vi2;
	vi2 = vi;
	cout << vi2[1] << endl;
	array<int, 20> at1 = { 1,2,3,4 };

	system("pause");
}

char * getnameChar() {
	cout << "Enter a name:";
	char  temp[80];
	cin >> temp;
	char * pn = new char[strlen(temp)+1];
	strcpy(pn, temp);

	return pn;
}

int * getInt() {
	int num,count;
    int temp[80];
	cout << "Enter the count:";
	cin >> count;
	cout << "Enter the number:";
	for (int i = 0; i < count; i++) {
		cin >> num;
		temp[i] = num;
	}
	int * pn = new int[80];
	for (int i = 0; i < sizeof(temp)/sizeof(int); i++) {
		pn[i] = temp[i];
	}
	
	return pn;
}

void testInt() {
	static int test = 100;
	int num, count;
	int temp[80];
	cout << "Enter the count:";
	cin >> count;
	cout << "Enter the number:";
	for (int i = 0; i < count; i++) {
		cin >> num;
		temp[i] = num;
	}
	int * pn = new int[80];
	for (int i = 0; i < sizeof(temp) / sizeof(int); i++) {
		pn[i] = temp[i];
	}
	pn = temp;
	cout << *pn << endl;
}
