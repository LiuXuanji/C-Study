// ��дһ��C++������Ҫ���û�����һ����longΪ��λ�ľ��룬Ȼ����ת��Ϊ�루һlong����220�룩��
#include<iostream>
using namespace std;
int convert(int);
int main()
{
	int distance;
	cout << "Enter a distance in long: ";
	cin >> distance;
	cout << distance << " long = ";
	cout << convert(distance) << " yard." << endl;
	return 0;
}
int convert(int x)
{
	return x * 220;
}