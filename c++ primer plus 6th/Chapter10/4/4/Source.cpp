#include"sales.h"
int main() {
	double ar[] = { 2.1,1.3,4.5,6.7 };
	SALES a = SALES();
	a.showSales();
	SALES b=SALES(ar, 4);
	b.showSales();

	system("pause");
}
