#include"stack.h"


//class Stack
//{
//private:
//	enum { MAX = 10 };    // constant specific to class
//	Item * items;    // holds stack items
//	int size;
//	int top;            // index for top stack item
//public:
//	Stack(int n = MAX);
//	Stack(const Stack & st);
//	~Stack();
//	bool isempty() const;
//	bool isfull() const;
//	// push() returns false if stack already is full, true otherwise
//	bool push(const Item & item);   // add item to stack
//									// pop() returns false if stack already is empty, true otherwise
//	bool pop(Item & item);          // pop top into item
//	Stack & operator=(const Stack & st);
//};


Stack::Stack(int n) {
	/*if (n > 10) {
		throw std::invalid_argument("More than the top num(10),quit.\n");
	}*/
	items = new Item[n+1];
	size = n;
	top = 0;
}

Stack::Stack(const Stack & st) {
	size = st.size;
	items = new Item[size];
	for (int i = 0; i < size; i++) {
		items[i] = st.items[i];
	}
	top = st.top;
}

Stack::~Stack() {
	delete[]items;
}

bool Stack::isempty()const {
	return top == 0;
}


bool Stack::isfull()const {
	return top == size;
}

bool Stack::push(const Item & item) {
	if (top < size) {
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item) {
	if (top > 0) {
		item = items[--top];
		return true;
	}
	else
		return false;
}

Stack & Stack::operator=(const Stack & st) {
	size = st.size;
	top = st.top;
	delete[]items;
	items = new Item[size + 1];
	for (int i = 0; i < size; i++) {
		items[i] = st.items[i];
	}
	return *this;
}