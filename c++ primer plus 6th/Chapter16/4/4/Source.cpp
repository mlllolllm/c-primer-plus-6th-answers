#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int reduce(long ar[], int n);

int main() {
	long ar[10] = { 1,2,3,4,5,6,8,8,8,9 };
	int n = reduce(ar, 10);
	cout << n << endl;

	system("pause");
}



int reduce(long ar[], int n) {
	sort(ar, ar+n);
	//vector<long> temp(ar, ar + n);
	auto newEnd=unique(ar,ar+n);
	//temp.erase(newEnd, temp.end);
	int res = distance(ar, newEnd);
	return res;
}


