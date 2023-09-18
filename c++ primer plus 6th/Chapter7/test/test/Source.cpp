#include<iostream>
using namespace std;

const int ArSize = 8;
double test(double a, double);
int main() {
	//int cookies[ArSize] = { 10,2,3,4,5,6,7,8 };
	//cout << sizeof(int) << endl;
	//cout << &cookies << endl;
	//cout << &cookies + 1 << endl;
	//cout << &cookies + 2 << endl;

	//cout  << ((int*)(&cookies + 1)) << " "<<*cookies<<" "<< ((int*)(&cookies + 1) - 1)<<" "<< (&cookies + 1) <<" "
	//	<< *((int*)(&cookies + 1) - 1);

	int n,a=0;
	bool b, b2;
	b = (bool)(cin >> n);
	cout << "get n:" << n << endl;
	cin.clear();
	//cin.ignore(numeric_limits<std::streamsize>::max(),'\n');
	cin.sync();
	b2 = (bool)(cin >> a);
	cout << "get a:" << a << endl;
	//while (bool b =(cin >> n)) {
	//	//cin.clear();
	//	/*while (cin.get() != '\n')
	//	continue;*/
	//	cout << "Please enter the right numbers!\n";
	//	cout << "Reinput:";
	//}
	system("pause");
}
