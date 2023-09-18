#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;

int main() {
	//cout << "Enter words(q to quit):"<<endl;
	////string input;
	//char input[30];
	//int vo = 0, co = 0, others = 0;
	////cin >> input;
	//while (cin>>input&&strcmp(input,"q")) {
	//	bool define = isalpha(input[0]);
	//	if (define&&input[0] == 'a' || input[0] == 'o' || input[0] == 'e' || input[0] == 'i' || input[0] == 'u'|| input[0] == 'A'|| input[0] == 'O'|| input[0] == 'E'|| input[0] == 'I'|| input[0] == 'U')
	//		vo++;
	//	else if (define)
	//		co++;
	//	else
	//		others++;
	//	//cin >> input;

	//}

	//cout << vo << " words begin with vowels\n";
	//cout << co << " words begin with consonants\n";
	//cout << others << " others" << endl;

	//cout << "Enter words(q to quit):" << endl;
	//char ch;
	//int vo = 0, co = 0, others = 0;
	//while (cin.get(ch)&&ch != 'q') {
	//	bool define = isalpha(ch);
	//	if (define&&input[0] == 'a' || input[0] == 'o' || input[0] == 'e' || input[0] == 'i' || input[0] == 'u'|| input[0] == 'A'|| input[0] == 'O'|| input[0] == 'E'|| input[0] == 'I'|| input[0] == 'U')
	//		vo++;
	//	else if (define)
	//		co++;
	//	else
	//		others++;
	//}

	//cout << vo << " words begin with vowels\n";
	//cout << co << " words begin with consonants\n";
	//cout << others << " others" << endl;


	std::cout << "Enter words(q to quit):" << endl;
	string input;
	//char input[30];
	int vo = 0, co = 0, others = 0;
	while (cin >> input&&input!="q") {
		bool define = isalpha(input[0]);
		if (define&&input[0] == 'a' || input[0] == 'o' || input[0] == 'e' || input[0] == 'i' || input[0] == 'u' || input[0] == 'A' || input[0] == 'O' || input[0] == 'E' || input[0] == 'I' || input[0] == 'U')
			vo++;
		else if (define)
			co++;
		else
			others++;
		//cin >> input;

	}

	std::cout << vo << " words begin with vowels\n";
	std::cout << co << " words begin with consonants\n";
	std::cout << others << " others" << endl;

	system("pause");
}
