#include"golf.h"

golf::golf( const char * name, int hc) {
	strcpy_s(m_fullname, name);
	m_handicap = hc;
}

// interactive version:
// function solicits name and handicap from uaer
// and sets the members of g to the valus entered
// returns 1 if name is entered, 0 if name is empty string
golf::golf() {
	cout << "Please enter the relational information!" << endl;
	cout << "Please enter thr name:";
	cin.get(m_fullname, Len);
	cin.get();
	cout << "Please enter the num:";
	cin >> m_handicap;
}
// function resets handicap to new value
void golf::handicap(int hc) {
	m_handicap = hc;
}
// function displays  contents of golf structure
void golf::showgolf() {
	cout << "The golf's name is:" << m_fullname << endl;
	cout << "The handicap is:" << m_handicap << endl;
}