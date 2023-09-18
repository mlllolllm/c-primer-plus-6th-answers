#include<iostream>
#include<string>
using namespace std;

int main() {
	//cout << "Enter words(to stop, type the word done):" << endl;
	//string fin = "done";
	//string input;
	//int num=0;
	//getline(cin, input);
	//for (int i = 0; i < input.size()-3; i++) {
	//	if (input[i] == ' ')
	//			num++;
	//	if (input[i] == 'd'&&input[i + 1] == 'o'&&input[i + 2] == 'n'&&input[i + 3] == 'e') {
	//		break;
	//	}
	//	
	//}
	//cout << "You entered " << num << " words!" << endl;

	cout << "Enter words(to stop, type the word done):" << endl;
	string fin = "done";
	string input;
	int num = 0;
	cin >> input;
	while (input != "done") {
		num++;
		cin >> input;

	}
	cout << "You entered " << num << " words!" << endl;

	system("pause");
}