#include<iostream>
using namespace std;

int main() {
	cout << "Please enter one of the following choices:\n";
	cout << "c)carnivore        p)pianist\n";
	cout << "t)tree             g)game\n";
	char ch;
	cin >> ch;
	while (ch!='c'&&ch!='p'&&ch!='t'&&ch!='g') {
		if (ch!= '\n')
			cin.clear();
		cout << "Please enter a c,p,t,or g:\n";
		cin >> ch;
		
	}

	switch (ch) {
	case 'c':
		cout << "A maple is a carnivore.\n";
		break;
	case 'p':
		cout << "A maple is a pianist.\n";
		break;
	case 't':
		cout << "A maple is a tree.\n";
		break;
	case 'g':
		cout << "A maple is a game.\n";
		break;
	}

	system("pause");
}
