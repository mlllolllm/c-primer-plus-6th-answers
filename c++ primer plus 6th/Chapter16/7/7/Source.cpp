#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<random>
#include<string>
using namespace std;

vector<int> lotto(int all, int num);

int main() {
	vector<int> winners;
	cout << "Game begin!" << endl;
	cout << "If you whant to get the winners,input c,others will turn to quit\n";
	string status;
	getline(cin, status);
	while (status=="c")
	{
		cout << "The winners are:";
		winners = lotto(51, 6);
		for (int i = 0; i < winners.size(); i++) {
			cout << winners[i] << " ";
		}
		cout << endl;
		cout << "If you whant to get the winners,input c,others will turn to quit\n";
		getline(cin, status);
	}

	system("pause");
}


vector<int> lotto(int all, int num) {
	vector<int> temp(all);
	iota(temp.begin(), temp.end(), 1);

	random_device rd;
	mt19937 gen(rd());
	shuffle(temp.begin(), temp.end(), gen);

	vector<int> res;
	for (int i = 0; i < num; i++) {
		res.push_back(temp[i]);
	}

	return res;
}