#pragma once
#ifndef Person_H_
#define Person_H_
#include<iostream>
#include<string>
using namespace std;

class Person {
private:
	string m_last_name;//xing
	string m_first_name;//ming
public:
	Person(string last_name = "Lionel", string first_name="Messi"):m_last_name(last_name), m_first_name(first_name) {}
	~Person() {}
	virtual void Show();
};

class Gunslinger:virtual public Person {
private:
	int m_carve_num;
public:
	Gunslinger(int carve_num, string last_name, string first_name):m_carve_num(carve_num),Person(last_name,first_name){}
	~Gunslinger() {}
	double Draw();
	void Show();
};

class PokerPlayer :virtual public Person {
public:
	PokerPlayer(string last_name, string first_name):Person(last_name, first_name){}
	~PokerPlayer() {}
	int Draw();
	void Show();
};

class BadDude :virtual public Gunslinger, virtual public PokerPlayer {
public:
	BadDude(int carve_num, string last_name = "Lionel", string first_name = "Messi"):Person(last_name, first_name), Gunslinger(carve_num, last_name, first_name), PokerPlayer(last_name, first_name) {}
	~BadDude() {}
	double Gdraw();
	int Cdraw();
	void Show();
};


#endif // !Person_H_
