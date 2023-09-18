#include<iostream>
using namespace std;

const  int strsize = 30;
struct bop {
	char fullname[strsize];  //真实姓名
	char title[strsize];    //头衔
	char bopname[strsize];  //bop姓名
	int preference; //0=fullname, 1=title, 2=bopname
};
int main() {
	bop people[5] = {
		{ "Bob", "player", "B", 0 },
		{ "Jack", "boss", "J", 2 },
		{ "Steve", "worker", "S", 2 },
		{ "White", "engineer", "W", 1 },
		{ "Alex", "finder", "A", 0 },
	};
	cout << "菜单：" << endl;
	cout << "a.fullname\tb.title" << endl;
	cout << "c.bopname\td.preference" << endl;
	cout << "q.quit" << endl;
	cout << "Enter your choice:";
	char ch;
	while (cin>>ch) {
		if (ch == 'q')
			break;
		while (ch != 'a'&&ch != 'b'&&ch != 'c'&&ch != 'd'&&ch != 'q') {
			if (ch != '\n')
				cin.clear();
			cout << "Please enter the right alpha!\n";
			break;

		}
		switch (ch) {
		case'a':
			for (int i = 0; i < 5; i++) {
				cout << people[i].fullname << endl;
			}
			break;
		case'b':
			for (int i = 0; i < 5; i++) {
				cout << people[i].title << endl;
			}
			break;
		case'c':
			for (int i = 0; i < 5; i++) {
				cout << people[i].bopname << endl;
			}
			break;
		case'd':
			for (int i = 0; i < 5; i++) {
				cout << people[i].preference << endl;
			}
			break;
		}
		cout << "Enter your choice:";
	}
	


	system("pause");
}
