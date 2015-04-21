//============================================================================
// Name        : swap.cpp
// Author      : Romina
// Version     :
// Copyright   : Your copyright notice
// Description : Swapping with c++ style
//============================================================================

#include <iostream>

using namespace std;

void myswap(int& a, int& b);
void myswap(double& a, double& b);

int main() {
	int a,b;

	std::cout << "enter a:" << endl;
	std::cin >> a;
	std::cout << "enter b:" << endl;
	std::cin >> b;

	myswap(a,b);

	std::cout << "a: " << a << endl;
	std::cout << "b: " << b << endl;

	return 0;
}

/**
 * This swap method naturally uses call-by-reference
 * and uses signature type to distinguish int/double (&)
 */
void myswap(int& a, int& b)
{
	int temp=a;
	a=b;
	b=temp;
}

void myswap(double& a, double& b)
{
	double temp=a;
	a=b;
	b=temp;
}
