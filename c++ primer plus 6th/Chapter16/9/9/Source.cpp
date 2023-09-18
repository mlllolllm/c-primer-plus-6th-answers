#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<random>
#include<iterator>
#include<ctime>
#include<chrono>

using namespace std;

int main() {
	vector<int> vi0(1000000);

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(1, 100);

	for (int &i : vi0) {
		i = distribution(gen);
	}
	vector<int>vi(vi0);
	list<int>li;
	copy(vi0.begin(), vi0.end(), back_inserter(li));

	clock_t start_sort_vi = clock();
	sort(vi.begin(), vi.end());
	clock_t end_sort_vi = clock();
	cout << "The vi sort time is:" << (double)(end_sort_vi - start_sort_vi) / CLOCKS_PER_SEC << endl;

	clock_t start_sort_li = clock();
	li.sort();
	clock_t end_sort_li = clock();
	cout << "The li sort time is:" << (double)(end_sort_li - start_sort_li) / CLOCKS_PER_SEC << endl;

	li.assign(vi0.begin(), vi0.end());
	clock_t start_method = clock();
	vi.assign(li.begin(), li.end());
	sort(vi.begin(), vi.end());
	li.assign(vi.begin(), vi.end());
	clock_t end_method = clock();
	cout << "The method time is:" << (double)(end_method - start_method) / CLOCKS_PER_SEC << endl;

	system("pause");
}