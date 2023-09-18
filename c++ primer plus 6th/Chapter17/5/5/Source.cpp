#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<fstream>
using namespace std;

int main() {
	string temp;
	cout << "Welcome Mat`s and Pat`s friends!\n";
	cout << "Here are Mat`s friends(q to quit):\n";
	vector<string> mf;
	getline(cin, temp);
	while (temp != "q") {
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
	ofstream fout("temp");
	if (!fout.is_open()) {
		cerr << "Open file error!" << endl;
		system("pause");
		return 0;
	}
	fout << "The friends are:\n";

	

	for (const string&i : res) {
		fout << i << endl;
	}
	cout << "Done!" << endl;
	system("pause");
}