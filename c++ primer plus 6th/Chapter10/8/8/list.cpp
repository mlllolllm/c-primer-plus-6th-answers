#include "list.h"
#include <iostream>

List::List()
{
	COUNT = 0;
}

bool List::isfull()
{
	return COUNT == MAX;
}

bool List::isempty()
{
	return COUNT == 0;
}
bool List::addItem(Item it)
{
	if (this->isfull())
	{
		std::cout << "full already, add fail. " << std::endl;
		return false;
	}
	else
	{
		ITEM[COUNT++] = it;
		return true;
	}
}

Item *List::item()
{
	return ITEM;
}

int List::count()
{
	return COUNT;
}

void List::visit(void(*pf)(Item &))
{
	for (int i = 0; i < COUNT; i++)
	{
		(*pf)(ITEM[i]);
	}
}