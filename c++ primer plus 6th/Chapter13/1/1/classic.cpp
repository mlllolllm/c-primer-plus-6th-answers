#include"classic.h"

Cd::Cd(char * s1, char * s2, int n, double x) {
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d) {
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	strcpy(performers, "defalt");
	strcpy(label, "defalt");
	selections = 0;
	playtime = 0;
}

Cd::~Cd() {
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
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * s1, char * s2, char *s3, int n, double x) :Cd(s1,s2,n, x) {
	strcpy(location, s3);
}

Classic::Classic():Cd() {
	strcpy(location, "defalt");
}
Classic::~Classic() {

}

void Classic::Report() const {
	Cd::Report();
	cout << "The new variable location is:" << location << endl;
}

Classic & Classic::operator=(const Classic & d) {
	if (this == &d)
		return *this;
	Cd::operator=(d);
	strcpy(location, d.location);
	return *this;
}