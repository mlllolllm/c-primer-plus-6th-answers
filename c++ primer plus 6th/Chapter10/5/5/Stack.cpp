#include"stack.h"
Stack::Stack()
{
	top = 0;
}

Stack::~Stack()
{
}
bool Stack::isempty()const {
	return top == 0;
}
bool Stack::isfull()const {
	return top == MAX;
}
bool Stack::push(const Item&item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item) {
	static double total = 0;
	if (top > 0) {
		item = items[--top];
		total += item.payment;
		cout << "For now the payment is:" << total<<endl;
		return true;
	}
	else {
		return false;
	}
	
}