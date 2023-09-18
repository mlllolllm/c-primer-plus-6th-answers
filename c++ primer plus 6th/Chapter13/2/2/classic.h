#pragma once

#include<iostream>
#include<string.h>
using namespace std;
//base class
class Cd {
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd & d);
};

class Classic :public Cd {
private:
	char *location;
public:
	Classic(char * s1, char * s2, char *s3, int n, double x);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & d);
};

