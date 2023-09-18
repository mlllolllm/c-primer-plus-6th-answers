#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream infile;
	infile.open("test.txt");
	if (!infile.is_open()) {
		cout << "Could not open the file.\n";
		cout << "Program terminating.\n";

	}
	char value;
	int num=0;
	infile >> value;
	while (infile.good()) {
		++num;
		infile >> value;
	}

	infile.close();
	cout << num << endl;
	system("pause");
}
