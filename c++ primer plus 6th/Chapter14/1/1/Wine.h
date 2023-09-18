#pragma once
#include<iostream>
#include<string>
#include<valarray>
using namespace std;

template<class T1,class T2>
class Pair {
private:
	T1 a;
	T2 b;
public:
	T1 & first();
	T2 & second();
	T1 first()const { return a; }
	T2 second()const { return b; }
	Pair(const T1 & aval,const T2 & bval):a(aval),b(bval){}
	Pair(){}
};

template<class T1,class T2>
T1 & Pair<T1, T2>::first() {
	return a;
}
template<class T1,class T2>
T2 & Pair<T1, T2>::second() {
	return b;
}


typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine {
private:
	string label;
	PairArray inf;
	int num_of_year;
public:
	Wine(const char * l, int y, const int yr[], const int bot[]) :label(l), num_of_year(y), inf(ArrayInt(yr, y), ArrayInt(bot, y)) {};
	Wine(const char * l, int y) :label(l), num_of_year(y), inf(ArrayInt(0, y), ArrayInt(0, y)) {};
	void GetBottles();
	string & Label() { return label; }
	int sum();
	void Show();
};

