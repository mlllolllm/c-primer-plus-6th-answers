#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
int reduce(T ar[], int n);

int main() {
	long ar[10] = { 1,2,3,4,5,6,8,8,8,9 };
	int nl = reduce(ar, 10);
	cout << nl << endl;

	string stra[10] = { "a","a","a" ,"a" ,"a" ,"a" ,"a" ,"a" ,"a" ,"bdbdbd" };
	int ns = reduce(stra, 10);
	cout << ns << endl;
	system("pause");
}


template<class T>
int reduce(T ar[], int n) {
	sort(ar, ar + n);
	//vector<long> temp(ar, ar + n);
	auto newEnd = unique(ar, ar + n);
	//temp.erase(newEnd, temp.end);
	int res = distance(ar, newEnd);
	return res;
}


