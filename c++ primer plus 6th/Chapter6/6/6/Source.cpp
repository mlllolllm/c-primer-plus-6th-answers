#include<iostream>
#include<string>
using namespace std;

struct donator {
	string name;
	double money;
};
int main() {
	cout << "Enter the num of the donators:";
	int num;
	
	//while(!(cin >> num)) {
	//	cin.clear();
	//	cout << "Please enter the right number!";
	//}
	donator * to = new donator[num];
	for (int i = 0; i < num; i++) {
		cout << "Enter the name:";
		cin>>to[i].name;
		cout << "Enter the number:";
		cin >> to[i].money;
	}
	cout << "The Grand Patrons are below:";
	for (int i = 0; i < num; i++) {
		if (to[i].money > 10000) {
			cout << to[i].name << ":" <<fixed<< to[i].money << endl;
		}
	}
	cout << "The Rest Patrons are below:";
	for (int i = 0; i < num; i++) {
		if (to[i].money <= 10000) {
			cout << to[i].name << ":" << to[i].money << endl;
		}
	}

	system("pause");
}
