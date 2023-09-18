#include<iostream>
using namespace std;
struct Count {
	double num;
	double OriPro;
	double NowPro;
	
};

int main() {
	Count Da = { 100,0.1 }, Cl = { 100,0,0.05 };
	cout << Da.num << Cl.num;
	int i=0;
	while(Da.num >= Cl.num){
		Da.num += 100*Da.OriPro;
		Cl.num+=Cl.num * Cl.NowPro;
		i++;
	}
	cout << "When it comes to the " << i << " year, the transference begins" << endl;
	cout << "At which time the money Daphne gets comes to " << Da.num << " and the Cleo's money is " << Cl.num << endl;

	system("pause");
}