#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker {
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n)
		: fullname(s), id(n) {}
	virtual ~Worker() {}
	virtual void Set();
	virtual void Show() const;
};


template<typename T>
class QueueTp {
private:
	enum{Q_SIZE=10};
	struct Node {
		T item;
		Node *next;
	};
	Node * front;
	Node * rear;
	int items;
	const int qsize;
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty()const { return items == 0; }
	bool isfull()const { return items == qsize; }
	int queuecount()const { return items; }
	bool enqueue(const T & item);
	bool dequeue();
};


