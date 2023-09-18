#include<iostream>
#include<string>
using namespace std;

struct CandyBar {
	string brand;
	double weight;
	int calorie;
};
int main() {
	CandyBar family[3] = { {"a",1,1},{"b",2,2} };
	cout << family[0].brand << endl;
	cout << family[1].weight << endl;

	system("pause");
}