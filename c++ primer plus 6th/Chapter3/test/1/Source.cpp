#include<iostream>
#include<climits>
using namespace std;

int main() {
	int num = 42;
	cout << "ʮ����Ϊ��" << num << endl;
	cout << sizeof(int) << " " << sizeof(long) << " " << sizeof(long double) << endl;
	
	cout << hex;
	cout << "ʮ������Ϊ��" << num << endl;
	cout << sizeof(int) << " " << sizeof(long) << " " << sizeof(long double) << endl;
	
	cout << oct;
	cout << "�˽���Ϊ��" << num << endl;
	cout << sizeof(int) << " " << sizeof(long) << " " << sizeof(long double) << endl;
	
	cout << dec;
	
	cout << "\a";
	
	char num1=88 ;
	
	int num2 = num1;
	cout << num1 <<" "<<num2<< endl;
	wcout << L"tall" << endl;
	long long c = 3e10;
	cout << c<<endl;
	cout << INT_MAX<<endl;
	char c4 = { 'x' };

	system("pause");
}