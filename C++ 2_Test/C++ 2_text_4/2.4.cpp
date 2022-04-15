// 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
// Enter your age：29
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