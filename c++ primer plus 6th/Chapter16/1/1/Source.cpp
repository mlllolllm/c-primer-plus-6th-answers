#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cout << "ENter the string(q to quit):";
	string input;
	while (cin >> input&&input != "q") {
		string temp(input.length(),' ');
		reverse_copy(input.begin(), input.end(), temp.begin());
		if (input == temp)
			cout << "The string is a palindrome" << endl;
		else
			cout << "Oops!\n";
		cout << "ENter the string(q to quit):";
	}


	system("pause");
}