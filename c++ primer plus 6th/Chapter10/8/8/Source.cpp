#include "list.h"
#include <iostream>

void intadd2(int &n);

int main()
{
	List l;
	l.addItem(1);
	l.addItem(2);
	l.addItem(3);
	for (int i = 0; i < 3; i++)
	{
		std::cout << l.item()[i] << std::endl;
	}
	l.visit(intadd2);
	for (int i = 0; i < 3; i++)
	{
		std::cout << l.item()[i] << std::endl;
	}
	system("pause");
	return 0;
}

void intadd2(int &n)
{
	n += 2;
}