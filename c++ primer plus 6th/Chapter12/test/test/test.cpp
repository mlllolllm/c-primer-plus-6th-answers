#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

int test::m_count = 0;
test::test(int n ) {
	m_num = n;
	m_count++;
	cout << m_count;
}

test::test() {
	m_num = 0;
	m_count++;
	cout << m_count;
}

test::~test() {
	m_count--;
}

void test::output() {
	cout << m_num << endl;
}

void change(test a) {
	a.m_num = 555;
	cout << a.m_num << endl;
}