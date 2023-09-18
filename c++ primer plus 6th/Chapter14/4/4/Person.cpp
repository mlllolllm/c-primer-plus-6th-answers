#include"Person.h"
#include<cstdlib>
#include<ctime>

void Person::Show() { 
	cout << "name is:" << m_first_name << " " << m_last_name << endl;
}

double Gunslinger::Draw() {
	srand(time(0));
	return rand();
}

void Gunslinger::Show() {
	cout << "carves_number is:" << m_carve_num << endl;
	cout << "time is:" << Gunslinger::Draw() << endl;
}

int PokerPlayer::Draw() {
	srand(time(0));
	return rand() % 52 + 1;
}

void PokerPlayer::Show() {
	Person::Show();
}

double BadDude::Gdraw() {
	return Gunslinger::Draw();
}

int BadDude::Cdraw() {
	return PokerPlayer::Draw();
}

void BadDude::Show() {
	PokerPlayer::Show();
	Gunslinger::Show();
}