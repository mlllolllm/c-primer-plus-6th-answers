#include<iostream>
using namespace std;

int main() {
	//char a;
	//char b[20];
	//	char str[8];
	//	
	//	cin >> b;
	//	cin.get(a);
	//	cout << a << endl;
	//	
	//	cin.getline(str, 5);
	//	cout << str << endl;
	//	
	//int x = 5;
	//cout << !x << endl;

	
	//enum { red, orange, yellow, blue, violet, indigo };

	//int num;
	//cin >> num;
	//switch (num) {
	//case red:
	//	cout << "The color is red!" << endl;
	//	break;
	//case orange:
	//	cout << "The color is blue!" << endl;
	//	break;
	//defalut:
	//	cout << "There has no such option!" << endl;
	//}


	//const int max=5;
	//int i = 0;
	//double ans[max];
	//while (i<max&&cin >> ans[i]) {
	//	if (++i < max) {
	//		cout << "The number of " << i << " is" << ans[i - 1] << endl;
	//	}
	//}

	const int MAX = 5;
	int num[MAX];
	cout << "Please enter the number:";
	double sum = 0;
	int i = 0;
	for (i = 0; i < MAX; ) {
		
		while (!(cin >> num[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number!" << endl;
		}
		if (++i <= MAX) {
			cout << "The " << i << " number is " << num[i-1] << endl;
		}
		sum += num[i-1];
	}

	sum =sum/i;
	cout << "The averagre number is:" << sum<<endl;

	system("pause");
}