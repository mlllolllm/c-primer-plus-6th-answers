#include"1.h"

int main() {
	Count jerry("jerry","jerry",10000);
	jerry.showCount();
	jerry.addCount(10000);
	jerry.showCount();
	jerry.withdrawCount(10000);
	jerry.showCount();
	system("pause");
}