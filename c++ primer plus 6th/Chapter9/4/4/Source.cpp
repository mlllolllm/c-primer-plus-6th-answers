#include"sales.h"
using namespace SALES;
int main() {
	double ar[] = { 2.1,1.3,4.5,6.7 };
	Sales a;
	setSales(a);
	showSales(a);
	setSales(a, ar, 4);
	showSales(a);

	system("pause");
}
