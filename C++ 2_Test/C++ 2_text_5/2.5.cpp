// ��дһ���������е�main()����һ���û�����ĺ������������¶�ֵΪ������
// ��������Ӧ�Ļ����¶�ֵ�����ó�������ĸ�ʽҪ���û����������¶�ֵ������ʾ�����
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// ������ת����ʽ��
//                 �����¶� = 1.8 �� �����¶� + 32.0

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