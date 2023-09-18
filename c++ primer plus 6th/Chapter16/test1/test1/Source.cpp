#include <iostream>

class MyString {
private:
	char* str;

public:
	MyString(const char* s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}

	// ��������أ�=
	MyString& operator=(MyString& other) {
		if (this == &other) {
			return *this;  // �����Ը�ֵ���
		}

		delete[] str;  // �ͷŵ�ǰ�������Դ

		str = new char[strlen(other.str) + 1];  // �����µ��ڴ�
		strcpy(str, other.str);  // ��������

		return *this;  // ���ص�ǰ���������
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

	(str1 = str2)=str3;  // ʹ�����������=

	std::cout << "str1: ";
	str1.display();  // ��� "World"

	std::cout << "str2: ";
	str2.display();  // ��� "World"

	std::cout << "str3: ";
	str3.display();


	system("pause");
	return 0;
}
