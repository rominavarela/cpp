//============================================================================
// Name        : swap.cpp
// Author      : Romina
// Version     :
// Copyright   : Your copyright notice
// Description : Swapping with c++ style
//============================================================================

#include <iostream>

using namespace std;

template <class T>
inline void myswap(T& a, T& b)
{
	T temp=a;
	a=b;
	b=temp;
}

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
