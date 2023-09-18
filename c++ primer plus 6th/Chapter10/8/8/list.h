#ifndef LIST_H
#define LIST_H

typedef int Item;
const int MAX = 10;
class List
{
private:
	Item ITEM[MAX];
	int COUNT;

public:
	List();
	bool isfull();
	bool isempty();
	bool addItem(Item it);
	Item *item();
	int count();
	void visit(void(*pf)(Item &));
};

#endif