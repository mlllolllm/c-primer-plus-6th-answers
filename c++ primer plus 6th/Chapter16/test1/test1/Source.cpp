#include <iostream>

class MyString {
private:
	char* str;

public:
	MyString(const char* s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}

	// 运算符重载：=
	MyString& operator=(MyString& other) {
		if (this == &other) {
			return *this;  // 处理自赋值情况
		}

		delete[] str;  // 释放当前对象的资源

		str = new char[strlen(other.str) + 1];  // 分配新的内存
		strcpy(str, other.str);  // 复制内容

		return *this;  // 返回当前对象的引用
	}

	void display() const {
		std::cout << str << std::endl;
	}

	~MyString() {
		delete[] str;
	}
};

int main() {
	MyString str1("Hello");
	MyString str2("World");
	MyString str3("Bye");

	(str1 = str2)=str3;  // 使用运算符重载=

	std::cout << "str1: ";
	str1.display();  // 输出 "World"

	std::cout << "str2: ";
	str2.display();  // 输出 "World"

	std::cout << "str3: ";
	str3.display();


	system("pause");
	return 0;
}
