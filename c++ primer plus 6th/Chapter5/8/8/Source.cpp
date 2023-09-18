#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cout << "Enter words(to stop, type the word done):" << endl;
	int sum = 0;
	char fin[] = "done";
	char word[20];
	cin >> word;
	while (strcmp(word, fin)) {
		sum++;
		cin >> word;
	}
	cout << "done前面共有" << sum << "个单词" << endl;


	system("pause");
}