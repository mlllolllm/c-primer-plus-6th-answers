#pragma once
#include<iostream>
#include<cstring>
using namespace std;
// golf.h -- for pe9-1.cpp
const int Len = 40;
class golf {
private:
	char m_fullname[Len];
	int m_handicap;
	
public:
	// non-interactive version:
	// function sets golf structure to provided name, handicap
	// using values passed as arguments to the function
	golf(const char * name, int hc);
	// interactive version:
	// function solicits name and handicap from uaer
	// and sets the members of g to the valus entered
	// returns 1 if name is entered, 0 if name is empty string
	golf();
	// function resets handicap to new value
	void handicap( int hc);
	// function displays  contents of golf structure
	void showgolf();
};

