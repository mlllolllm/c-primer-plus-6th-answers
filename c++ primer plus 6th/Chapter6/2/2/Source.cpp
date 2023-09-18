#include <iostream>

using namespace std;

/*
编写程序，最多将10个值读入一个double数组中（也可以使用array）
程序遇到非数字输入时，结束输入
输出这些数字的平均值以及数组中有多少个数字大于平均值
*/

int main()
{
	double num[10];
	int i = 0;
	double sum = 0.0;    //总和
	int count_num = 0;  //总共的数字个数
	double ave = 0.0;    //平均值
	int count_upper = 0;    //大于平均值的个数
	while (cin >> num[i]) {
		sum += num[i];
		count_num++;
		i++;
		if (count_num > 10)
			break;
	}
	ave = sum / count_num;
	cout << "平均值：" << ave << endl;
	i = 0;
	while (i < count_num) {
		if (num[i] > ave)
			count_upper++;
		i++;
	}
	cout << "比平均值大的有" << count_upper << "个" << endl;
	return 0;
}

