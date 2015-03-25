//============================================================================
// Name        : hello.cpp
// Author      : Romina
// Version     :
// Copyright   : Your copyright notice
// Description : This is a first transition from C to C++ code. Comments are oriented to explain changes.
//============================================================================

#include <iostream>
#include <cstdlib>//legacy stdlib.h and time.h
#include <ctime>

using namespace std;

const int NSIDES= 6;//legacy #define

//compiler directive, function code costs, inline is economic
inline int dropDice() { return rand() % NSIDES + 1; }

int main()
{
	int NDICES,rand;
	int sum=0;

	std::cout << "!!!Hello World!!!" << endl;

	while(true)
	{
		std::cout << "Let's drop a dice..." << endl;
		std::cin >> NDICES;

		if(NDICES <= 0)
			break;

		for(int i=0;i<NDICES;i++)
		{
			std::cout << (rand=dropDice()) << " ";
			sum+=rand;
		}

		std::cout << endl << "sum: " << sum << endl;
		std::cout << (sum%2==0 ? "got an even sum" : "got an odd sum") << endl;
	}

	std::cout << "Well, bye bye" << endl;
	return 0;
}
