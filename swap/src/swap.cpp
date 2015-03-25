//============================================================================
// Name        : swap.cpp
// Author      : Romina
// Version     :
// Copyright   : Your copyright notice
// Description : Swapping with c++ style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int a,b;

	std::cout << "enter a:" << endl;
	std::cin >> a;
	std::cout << "enter b:" << endl;
	std::cin >> b;

	swap(a,b);

	std::cout << "a: " << a << endl;
	std::cout << "b: " << b << endl;

	return 0;
}

/**
 * This swap method uses call-by-reference (&)
 */
void swap(int& a, int& b)
{
	int temp=a;
	b=a;
	a=temp;
}
