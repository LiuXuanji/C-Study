// ��дһ��������main()����һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ����
// �ó�������ĸ�ʽҪ���û��������ֵ������ʾ�����
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.
// ���ĵ�λ�Ǵӵ���̫����ƽ�����루Լ 150000000�����93000000Ӣ���
// �����ǹ�һ���ߵľ��루Լ10���ڹ����6����Ӣ�����̫���⣬����ĺ��Ǵ�Լ�����4.2���꣩��
// ��ʹ��double���ͣ�ת����ʽΪ��
//                            1���� = 63240���ĵ�λ
#include<iostream>
using namespace std;
double convert(double);
int main()
{
	double light;
	cout << " Enter the number of light years: ";
	cin >> light;
	cout << " " << light << " light years = " << convert(light) << " astronomical units." << endl;
	return 0;
}
double convert(double x)
{
	return x * 63240;
}