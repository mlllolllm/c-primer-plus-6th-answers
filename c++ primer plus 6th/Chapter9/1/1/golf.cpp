#include"golf.h"

void setgolf(golf & g, const char * name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

// interactive version:
// function solicits name and handicap from uaer
// and sets the members of g to the valus entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g) {
	cout << "Please enter the relational information!" << endl;
	cout << "Please enter thr name:";
	cin.get(g.fullname,Len);
	cin.get();
	cout << "Please enter the num:";
	cin >> g.handicap;
	if (g.fullname == 0)
		return 0;
	else
		return 1;
}
// function resets handicap to new value
void handicap(golf & g, int hc) {
	g.handicap = hc;
}
// function displays  contents of golf structure
void showgolf(const golf &g) {
	cout << "The golf's name is:" << g.fullname << endl;
	cout << "The handicap is:" << g.handicap << endl;
}