#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int main() {
	string temp;
	cout << "Welcome Mat`s and Pat`s friends!\n";
	cout << "Here are Mat`s friends(q to quit):\n";
	vector<string> mf;
	getline(cin, temp);
	while ( temp != "q") {
		mf.push_back(temp);
		getline(cin, temp);
	}
	cout << "Here are Pat`s friends(q to quit):\n";
	vector<string> pf;
	getline(cin, temp);
	while (temp != "q") {
		pf.push_back(temp);
		getline(cin, temp);
	}
	set<string> res;
	res.insert(mf.begin(), mf.end());
	res.insert(pf.begin(), pf.end());
	cout << "The friends are:\n";
	for (const string&i:res) {
		cout << i << endl;
	}
	system("pause");
}