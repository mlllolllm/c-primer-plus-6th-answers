//#include<iostream>
//using namespace std;
//
//int main() {
//	char ch = 0;
//	while (ch!= '@') {
//		cin >> ch;
//		if (islower(ch)) {
//			ch -= 32;
//		}
//		else if (isupper(ch)) {
//			ch+=32;
//		}
//		cout << ch;
//		
//	}
//
//	system("pause");
//}


#include <iostream>
#include <cctype>

using namespace std;

/*
编写程序，读取键盘输入，直到遇到@为止，并回显输入（数字除外）
同时将大小写字母互相转换
*/

int main()
{
	char ch;
	cin.get(ch);
	while (ch != '@') {
		if (islower(ch)) {
			cout << char(toupper(ch));
		}
		else if (isupper(ch)) {
			cout << char(tolower(ch));
		}
		++ch;
		cin.get(ch);
	}
	return 0;
}

