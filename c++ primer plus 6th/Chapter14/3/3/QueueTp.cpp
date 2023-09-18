#include"QueueTp.h"

void Worker::Set()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Worker::Show() const
{
	cout << "Name: " << fullname << "\n";
	cout << "Employee ID: " << id << "\n";
}

template<typename T>
QueueTp<T>::QueueTp(int qs) :qsize(qs),items(0) {
	front = rear = nullptr;
}

template<typename T>
QueueTp<T>::~QueueTp() {
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<typename T>
bool QueueTp<T>::enqueue(const T & item) {
	if (isfull())
		return false;
	Node * temp = new Node;
	if (front == NULL) {
		temp->item = item;
		temp->next = nullptr;
		front = rear = temp;
	}
	else {
		temp->item = item;
		temp->next = nullptr;
		rear->next = temp;
		rear = temp;
	}
	items++;

	return true;
}

template<typename T>
bool QueueTp<T>::dequeue() {
	if (isempty())
		return false;
	Node *temp = front;
	front = front->next;
	delete temp;
	items--;
	return true;
}