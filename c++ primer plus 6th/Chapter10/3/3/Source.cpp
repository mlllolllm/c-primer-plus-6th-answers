#include"golf.h"

int main() {
	golf ann("Ann Birdfree", 24);
	ann.showgolf();

	golf jake=golf();
	jake.handicap(12);
	jake.showgolf();

	system("pause");
}
