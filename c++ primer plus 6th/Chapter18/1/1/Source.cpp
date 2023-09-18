#include<iostream>
#include<initializer_list>
using namespace std;

template<typename T>
double average_list(std::initializer_list<T> li);
int main() {
	auto q = average_list({ 15.4,10.7,9.0 });
	cout << q << endl;

	cout << average_list({ 20,30,19,17,45,38 }) << endl;

	auto ad = average_list<double> ({ 'A',70,65.33 });
	cout << ad << endl;

	system("pause");
}

template<typename T>
double average_list(std::initializer_list<T> li) {
	double sum = 0.0;
	for (const auto& value : li) {
		sum += static_cast<double>(value); // 将各个元素转换为 double 类型相加
	}
	return sum / li.size();
}