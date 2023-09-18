#include"2.h"

//class Person
//{
//private:
//	static const int LIMIT = 25;
//	string lname;
//	char fname[LIMIT];
//public:
//	Person()
//	{
//		lname = " ";
//		fname[0] = '\0';
//	}
//	Person(const string& ln, const char* fn = "Heyyou");
//	void Show() const;
//	void FormalShow() const;
//};

Person::Person(const string& ln, const char* fn ) {
	lname = ln;
	strcpy_s(fname,LIMIT, fn);
}
void Person::Show()const {
	cout << "name is:" << fname <<" "<< lname << endl;
}
void Person::FormalShow()const {
	cout << "name is:" << lname <<" "<< fname << endl;
}