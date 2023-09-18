#include <iostream>
#include<string>
#include <memory>
#include<ostream>
using namespace std;

int main() {
	string a = "test";
	unique_ptr<string> t=unique_ptr<string>(new string(a));
	shared_ptr<string> s = move(t);

	//cout << *t << endl;
	cout << *s << endl;


	system("pause");
}
 