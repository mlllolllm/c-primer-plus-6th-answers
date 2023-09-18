//#include<iostream>
//#include<cstdio>
//
//int main() {
//	using namespace std;
//	cout << TMP_MAX << " " << L_tmpnam << endl;
//	char pszName[L_tmpnam] = { '\0' };
//	for (int i = 0; i < 10; i++) {
//		tmpnam(pszName);
//		cout << pszName << endl;
//	}
//
//	system("pause");
//	return 0;
//}

// strout.cpp -- incore formatting (output)
#include <iostream>
#include <sstream>
#include <string>
int main()
{
	using namespace std;
	ostringstream outstr;   // manages a string stream

	string hdisk;
	cout << "What's the name of your hard disk? ";
	getline(cin, hdisk);
	int cap;
	cout << "What's its capacity in GB? ";
	cin >> cap;
	// write formatted information to string stream
	outstr << "The hard disk " << hdisk << " has a capacity of "
		<< cap << " gigabytes.\n";
	string result = outstr.str();   // save result
	cout << result;                 // show contents

									// cin.get();
									// cin.get();

	system("pause");
	return 0;
}