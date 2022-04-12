#include<iostream>
using namespace std;

int main()
{
	int a1, b1, c1;
	float a2, b2, c2;
	double f;
	char d;

	a1 = 10;
	b1 = 20;
	c1 = a1 + b1;
	cout << " c1 = " << c1 << endl;
	f = a1 / c1; // 整型变量运算的结构仍为整型，会舍去小数后面的值，只保留整数位值
	cout << " f = " << f << endl;

	a2 = 10.0;
	b2 = 20.0;
	c2 = a2 + b2; // 屏幕显示会自动省略小数点后的无效零
	cout << " c2 = " << c2 << endl;
	f = a2 / c2;
	cout << " f = " << f << endl;

	d = '^'; // 单引号表示字符常量
	cout << " d = " << d << endl;

	return 0;
}