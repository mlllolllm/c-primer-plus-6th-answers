#include<iostream>
#include <cstdarg>
using namespace std;

long double sum_value() {
	return 0; // ���������û�в���ʱ����0
}

template<typename T,typename... Args>
long double sum_value(T value, Args...args);
int main() {
	long double sum = sum_value(1.1, 2.2, 3.3, 4.4, 5.5);
	std::cout << "Sum of values: " << sum << std::endl;

	system("pause");
}

template<typename T,typename... Args>
long double sum_value(T value, Args...args) {
	return (long double)value + sum_value(args...);
}

//#include <iostream>
//#include <cstdarg>
//
//// �ɱ����ģ�庯������������б�ĺ�
//long double sum_value() {
//	return 0; // ���������û�в���ʱ����0
//}
//
//template<typename T, typename... Args>
//long double sum_value(T value, Args... args);
//
//int main() {
//	// ���Կɱ����ģ�庯��
//	long double sum = sum_value(1.1, 2.2, 3.3, 4.4, 5.5);
//	std::cout << "Sum of values: " << sum << std::endl;
//
//
//	system("pause");
//	return 0;
//}
//
//template<typename T, typename... Args>
//long double sum_value(T value, Args... args) {
//	return value + sum_value(args...); // �ݹ���ã�������һ�������
//}