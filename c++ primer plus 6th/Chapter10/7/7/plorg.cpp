#include"plorg.h"

//class Plorg {
//private:
//	char m_name[19];
//	int m_CI;
//public:
//	Plorg(char*name = "Plorga", int CI = 19);
//	void show()const;
//	void changeCI();
//
//};

Plorg::Plorg(char*name, int CI) {
	strcpy_s(m_name, name);
	m_CI = CI;
}
void Plorg::show()const {
	cout << "The name is:" << m_name << endl;
	cout << "The CI is:" << m_CI << endl;
}
void Plorg::changeCI(int n) {
	m_CI += n;
}