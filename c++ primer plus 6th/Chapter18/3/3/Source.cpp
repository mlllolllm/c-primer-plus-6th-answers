#include<iostream>
#include <cstdarg>
using namespace std;

long double sum_value() {
	return 0; // 基本情况：没有参数时返回0
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
//// 可变参数模板函数，计算参数列表的和
//long double sum_value() {
//	return 0; // 基本情况：没有参数时返回0
//}
//
//template<typename T, typename... Args>
//long double sum_value(T value, Args... args);
//
//int main() {
//	// 测试可变参数模板函数
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
//	return value + sum_value(args...); // 递归调用，将参数一个个相加
//}