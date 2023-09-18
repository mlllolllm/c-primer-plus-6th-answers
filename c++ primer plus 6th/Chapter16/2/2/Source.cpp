#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main() {
	cout << "Enter the string(q to quit):";
	string input;
	while (getline(cin, input) && input != "q") {
		//cin.get();
		string res;
		for (int i = 0; i < input.length(); i++) {
			input[i] = tolower(input[i]);
			if (isalpha(input[i]))
				res += input[i];
			
		}
		string temp(res.length(), ' ');
		reverse_copy(res.begin(), res.end(), temp.begin());
		if (res == temp)
			cout << "The string is palindrome\n";
		else
			cout << "Oops!\n";
		cout << "Enter the string(q to quit):";
	}



	system("pause");
}