// ��дһ���������û����������䣬Ȼ����ʾ������������ٸ��£�������ʾ��
// Enter your age��29
// Your age in months is 348.
#include<iostream>
using namespace std;
int convert(int);
int main()
{
	int age;
	cout << " Enter your age: ";
	cin >> age;
	cout << " Your age in months is " << convert(age) << endl;
	return 0;
}
int convert(int x)
{
	return x * 12;
}