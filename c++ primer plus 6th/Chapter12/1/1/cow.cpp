#include"cow.h"
#define _CRT_SECURE_NO_WARNINGS

//class Cow {
//private:
//	char name[20];
//	char * hobby;
//	double weight;
//public:
//	Cow();
//	Cow(const char * nm, const char * ho, double wt);
//	Cow(const Cow &);
//	~Cow();
//	Cow & operator=(const Cow & c);
//	void ShowCow()const;
//
//};

Cow::Cow() {
	 strcpy(name, "Defalt");
	 hobby = new char[1];
	 hobby[0] = '\0';
	 weight = 0;
	 cout << "Object created." << endl;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
	strcpy(name, nm);
	//delete[]hobby;
	int hlen = strlen(ho);
	hobby = new char[hlen + 1];
	strcpy(hobby, ho);
	weight = wt;
	cout << "Object created." << endl;
}

Cow::Cow(const Cow &c) {
	strcpy(name,c.name);
	//delete[]hobby;
	int hlen = strlen(c.hobby);
	hobby = new char[hlen];
	strcpy(hobby,c.hobby);
	weight = c.weight;
	cout << "Object created." << endl;
}

Cow::~Cow() {
	delete[] hobby;
}

Cow & Cow::operator=(const Cow & c) {
	if (this == &c)
		return *this;
	strcpy(name,c.name);
	delete[]hobby;
	hobby = nullptr;
	int hlen = strlen(c.hobby);
	hobby = new char[hlen+1];
	strcpy(hobby,c.hobby);
	weight = c.weight;
	
	cout << "Object updated." << endl;
	return *this;
}

void Cow::ShowCow()const {
	cout << "The name is:" << name << endl;
	cout << "The hobbys are:" << hobby << endl;
	cout << "The weight is:" << weight << endl;
}