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
	f = a1 / c1; // ���ͱ�������Ľṹ��Ϊ���ͣ�����ȥС�������ֵ��ֻ��������λֵ
	cout << " f = " << f << endl;

	a2 = 10.0;
	b2 = 20.0;
	c2 = a2 + b2; // ��Ļ��ʾ���Զ�ʡ��С��������Ч��
	cout << " c2 = " << c2 << endl;
	f = a2 / c2;
	cout << " f = " << f << endl;

	d = '^'; // �����ű�ʾ�ַ�����
	cout << " d = " << d << endl;

	return 0;
}