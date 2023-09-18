#include<iostream>
#include <string>
using namespace std;

void OutputMiceNum(string num);
void OutputSupplement();
int main() {
	cout << "How many mice do you have:";
	string num;
	cin >> num;

	OutputMiceNum(num);
	OutputMiceNum(num);
	OutputSupplement();
	OutputSupplement();

	system("pause");
	//getchar();
}

void OutputMiceNum(string num) {
	cout << num << " blind mice" << endl;
}

void OutputSupplement() {
	cout << "See how they run" << endl;
}