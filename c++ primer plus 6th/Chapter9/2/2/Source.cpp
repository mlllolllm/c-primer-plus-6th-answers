//Listing 9.9 static.cpp
// static.cpp -- using a static local variable
#include <iostream>
#include<string>
using namespace std;
// constants
const int ArSize = 10;
// function prototype
void strcount(const string a);
int main()
{
	using namespace std;
	string input;
	char next;
	cout << "Enter a line:\n";
	getline(cin, input);
	while (input!="")
	{
		cout << input << endl;
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const string a)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	// static local variable // automatic local variable
	cout << "\"" << a << "\" contains ";
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != ' ')
			count++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}