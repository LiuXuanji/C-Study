// 编写一个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，
// 并返回相应的华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// 下面是转换公式：
//                 华氏温度 = 1.8 × 摄氏温度 + 32.0

#include<iostream>
using namespace std;
double convert(double);
int main()
{
	double Celsius;
	cout << " Please enter a Celsius value: ";
	cin >> Celsius;
	cout << " " << Celsius << " degrees Celsius is " << convert(Celsius) << " degrees Fahrenheit";
	return 0;
}
double convert(double x)
{
	return 1.8 * x + 32.0;
}