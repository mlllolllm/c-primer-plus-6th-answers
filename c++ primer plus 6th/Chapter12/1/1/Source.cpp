#include"cow.h"
#define _CRT_SECURE_NO_WARNINGS
int main() {
	Cow t1;
	Cow t2("Cherry", "Watching movies", 56);
	Cow t3("Jerry", "Playing games", 75);
	Cow t4 ;
	t4 = t3;
	t4.ShowCow();
	t3.ShowCow();
	t2.ShowCow();
	t1.ShowCow();

	system("pause");
}