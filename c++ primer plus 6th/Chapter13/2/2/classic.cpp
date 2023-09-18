#include"classic.h"

Cd::Cd(char * s1, char * s2, int n, double x) {
	char *temp1 = new char[strlen(s1) + 1];
	char *temp2 = new char[strlen(s2) + 1];
	strcpy(temp1, s1);
	strcpy(temp2, s2);
	performers = temp1;
	label = temp2;
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d) {
	char *temp1 = new char[strlen(d.performers) + 1];
	char *temp2 = new char[strlen(d.label) + 1];
	strcpy(temp1, d.performers);
	strcpy(temp2, d.label);
	performers = temp1;
	label = temp2;
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	char * temp1 = new char[strlen("default") + 1];
	char * temp2 = new char[strlen("default") + 1];
	strcpy(temp1, "default");
	strcpy(temp2, "default");
	performers = temp1;
	label = temp2;
	selections = 0;
	playtime = 0;
}

Cd::~Cd() {
	delete[]performers;
	delete[]label;
	cout << "Cd deleted.\n";
}

void Cd::Report() const {
	cout << "The performers are:" << performers << endl;
	cout << "The label is:" << label << endl;
	cout << "The selections num is:" << selections << endl;
	cout << "The playtime is:" << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
	if (this == &d)
		return *this;
	delete[]performers;
	delete[]label;
	char *temp1 = new char[strlen(d.performers) + 1];
	char *temp2 = new char[strlen(d.label) + 1];
	strcpy(temp1, d.performers);
	strcpy(temp2, d.label);
	performers = temp1;
	label = temp2;
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * s1, char * s2, char *s3, int n, double x) :Cd(s1, s2, n, x) {
	char * temp3 = new char[strlen(s3) + 1];
	strcpy(temp3, s3);
	location = temp3;
}

Classic::Classic() : Cd() {
	char *temp3 = new char[strlen("default") + 1];
	strcpy(temp3, "default");
	location = temp3;
}
Classic::~Classic() {
	delete[]location;
	cout << "Classic deleted.\n";
}

void Classic::Report() const {
	Cd::Report();
	cout << "The new variable location is:" << location << endl;
}

Classic & Classic::operator=(const Classic & d) {
	if (this == &d)
		return *this;
	delete[]location;
	Cd::operator=(d);
	char * temp3 = new char[strlen(d.location) + 1];
	strcpy(temp3, d.location);
	location = temp3;
	return *this;
}