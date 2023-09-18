#include<iostream>
using namespace std;

int main() {
	
	double heightFeet, heightInches;
	double weightKg;
	cout << "请分别输入身高的英尺数和英寸数：";
	cin >> heightFeet >> heightInches;
	cout << "请输入体重(单位：千克）：";
	cin >> weightKg;

	double height = (heightFeet * 12 + heightInches)*0.0254;
	double weight = weightKg*2.2;
	double BMI_num = weight / height;

	cout << "你的BMI指数是：" << BMI_num << endl;
	system("pause");
}