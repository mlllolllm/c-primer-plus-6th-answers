#include<iostream>
#include<fstream>
#include<string>
using namespace std;


struct donator {
	string name;
	double money;
};
int main() {
	ifstream infile;
	infile.open("test.txt");
	while (!infile.is_open()) {
		cout << "Error!\n";
		exit(EXIT_FAILURE);
	}
	int num = 0;
	string tname;
	double tmoney;
	infile >> num;
	infile.get();
	donator *pd = new donator[num];
	for (int i = 0; i < num; i++) {
		
		getline(infile,tname);
		
		infile >> tmoney;
		infile.get();
		pd[i].name = tname;
		pd[i].money = tmoney;
	}
	for (int i = 0; i < num; i++) {
		cout << pd[i].name<< endl;
		cout << pd[i].money << endl;
	}
	system("pause");
}