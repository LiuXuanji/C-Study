// exceed.cpp -- exceeding some integer limits
#include<iostream>
#define ZERO 0  // make ZERO symbol for 0 value
#include<climits>
using namespace std;
int main()
{
	short sam = SHRT_MAX;
	unsigned short sue = sam; // okay if variable sam already defined
	cout << " Sam has " << sam << " dollars and Sua has " << sue;
	cout << " dollars deposited." << endl;
	cout << " Add $1 to each account." << endl << " Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << " Poor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << " Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << " Take $1 from each account." << endl << " Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << " Lucky Sue!" << endl;
	return 0;
}


// 从运行结果看，如果超越了限制，其值将为范围另一端的取值。