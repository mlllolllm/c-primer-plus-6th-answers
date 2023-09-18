#include<iostream>
#include<string>
using namespace std;

void upperString();
int main() {

	upperString();
	system("pause");
}

void upperString() {
	string a;
	cout << "Enter a string(q to quit):";
	getline(cin, a);
	while (a!= "q") {
for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
	}
	cout << a << endl;
	cout << "Enter a string(q to quit):";
	getline(cin, a);
	}
	
}