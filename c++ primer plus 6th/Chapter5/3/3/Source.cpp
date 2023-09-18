#include<iostream>
using namespace std;

int main() {
	int num=0;
	cout << "Enter the number and it'll give an answer.When you type 0,the program end." << endl;;
	while(1){
		int temp;
		cin >> temp;
		if (temp == 0) {
			cout << "Here come to an end!" << endl;
			break;
		}
		num += temp;
		cout << "The sum to now is:" << num << endl;
	} 

	system("pause");
}