// ��дһ������Ҫ���û�����Сʱ���ͷ���������main()�����У���������ֵ���ݸ�һ��void������
// ���������������ĸ�ʽ��ʾ������ֵ��
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28
#include<iostream>
using namespace std;
void time(int, int);
int main()
{
	int hours;
	int minutes;
	cout << " Enter the number of hours: ";
	cin >> hours;
	cout << " Enter the number of minutes: ";
	cin >> minutes;
	time(hours, minutes);
	return 0;
}
void time(int x, int y)
{
	cout << "Times: " << x << ":" << y << endl;
}