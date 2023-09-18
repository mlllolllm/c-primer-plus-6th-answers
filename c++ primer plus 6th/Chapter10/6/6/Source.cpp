#include"move.h"

int main() {
	Move a;
	a.showmove();
	Move b = Move(1, 5);
	b.showmove();
	Move c=a.add(b);
	c.showmove();
	a.reset();
	a.showmove();

	system("pause");
}


