#include<iostream>
using namespace std;

int main() {
	
	double heightFeet, heightInches;
	double weightKg;
	cout << "��ֱ�������ߵ�Ӣ������Ӣ������";
	cin >> heightFeet >> heightInches;
	cout << "����������(��λ��ǧ�ˣ���";
	cin >> weightKg;

	double height = (heightFeet * 12 + heightInches)*0.0254;
	double weight = weightKg*2.2;
	double BMI_num = weight / height;

	cout << "���BMIָ���ǣ�" << BMI_num << endl;
	system("pause");
}