#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	cout << "Enter the file to be copy:";
	string copy;
	getline(cin, copy);
	
	cout << "Enter the file to copy to:";
	string copied;
	getline(cin, copied);

	ifstream fin(copy);
	if (!fin.is_open()) {
		cerr << "Copy file open error!" << endl;
		return 0;
	}
	ofstream fout(copied);
	if (!fout.is_open()) {
		cerr << "Copied file open error!" << endl;
		return 0;
	}
	

	char temp;
	while ((temp=fin.get()) != EOF) {
		fout << temp;
	}
	cout << "Done." << endl;

	system("pause");
}