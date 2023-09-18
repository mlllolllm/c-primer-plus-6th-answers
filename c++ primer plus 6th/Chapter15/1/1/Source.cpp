#include <iostream>
#include "Tv.h"

int main()
{
	Tv t;
	t.settings();

	Remote r;
	r.show_gmode();

	r.onoff(t);
	t.settings();

	t.set_gmode(r);
	r.show_gmode();

	system("pause");
	return 0;
}