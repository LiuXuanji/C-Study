// carrots.cpp -- food processing program
// uses and displays a variable
#include<iostream>
using namespace std;
int main()
{
	int carrots;                                  // declare an integer variable
	carrots = 25;                                 // assign a value to the variable
	cout << "I have ";
	cout << carrots;                              // display the value of the variable
	cout << " carrots." << endl;
	carrots = carrots - 1;                        // modify the variable
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}