#include<iostream>
#include<string>
using namespace std;

int main() {
	int temp=0;
	char a;
	while (a=cin.get() != '#')
	{
		temp++;
	}
	cin.putback(a);

	cout << temp << endl;
	system("pause");
}