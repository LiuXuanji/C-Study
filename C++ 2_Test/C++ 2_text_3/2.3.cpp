// 编写一个C++程序，它使用3个用户定义的函数（包括main()）,并生成下面的输出：
// Three blind mice
// Three blind mice
// See how they run
// See how they run
#include<iostream>
using namespace std;

void mice(void);
void run(void);
int main()
{
	mice();
	mice();
	run();
	run();
	return 0;
}

void mice(void)
{
	cout << " Three blind mice." << endl;
}
void run(void)
{
	cout << " See how they run." << endl;
}