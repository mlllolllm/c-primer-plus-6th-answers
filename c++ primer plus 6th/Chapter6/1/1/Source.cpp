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
��д���򣬶�ȡ�������룬ֱ������@Ϊֹ�����������루���ֳ��⣩
ͬʱ����Сд��ĸ����ת��
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

