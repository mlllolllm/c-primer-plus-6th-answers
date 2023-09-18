#include<iostream>
using namespace std;

struct box {
	char maker[40];
	float height;
	float weight;
	float length;
	float volume;
};
void showBox(box);
void countV(box *);

int main() {
	box a;
	box *b = &a;
	cout << "Please enter the maker of the box:" << endl;
	cin.getline(a.maker, 40);
	cout << "Please enter the height of the box:" << endl;
	cin>>a.height;
	cout << "Please enter the weight of the box:" << endl;
	cin >> a.weight;
	cout << "Please enter the length of the box:" << endl;
	cin >> a.length;
	cout << "Please enter the volume of the box:" << endl;
	cin >> a.volume;
	showBox(a);
	countV(b);

	system("pause");
}

void showBox(box a) {
	cout << "The maker is:" << a.maker << endl;
	cout << "The height is:" << a.height << endl;
	cout << "The weight is:" << a.weight << endl;
	cout << "The length is:" << a.length << endl;
	cout << "The volume is:" << a.volume << endl;
}
void countV(box *a) {
	a->volume = a->height*a->weight*a->length;
	cout << "The volume has been adjusted to:" << a->volume << endl;
}