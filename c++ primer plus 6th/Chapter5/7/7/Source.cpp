#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct car {
	string manufacturer;
	int create;

};

int main() {
	cout << "How many cars do you wish to catelog?"<<endl;
	int num,i;
	cin >> num;
	
	car * user = new car[num];
	for (i = 0; i < num; i++) {
		
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the maker:";
		cin.get();
	    getline(cin,user[i].manufacturer);
		cout << "Please enter the year made:";
		cin>>user[i].create;
	}
	cout << "Here is your collection:" << endl;
	for (int j = 0; j < i; j++) {
		cout << user[j].manufacturer << " " << user[j].create << endl;
	}
	system("pause");
}