//============================================================================
// Name        : Types.cpp
// Author      : Romina Espinosa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef enum Day
{
	LUN=1,MAR,MIE,JUE,VIE,SAB,DOM
};

Day operator+(Day d1, Day d2)
{
	return static_cast<Day>(
		( static_cast<int>(d1) + static_cast<int>(d2) )%7
	);
}

ostream& operator<< (ostream& out, Day d)
{
	switch(d)
	{
		case LUN: out << "LUN"; break;
		case MAR: out << "MAR"; break;
		case MIE: out << "MIE"; break;
		case JUE: out << "JUE"; break;
		case VIE: out << "VIE"; break;
		case SAB: out << "SAB"; break;
		case DOM: out << "DOM"; break;
	}
	return out;
}

int main() {
	Day d1= LUN;
	Day d2= MAR;
	//d2++;
	Day d3= (d1+d2);

	std::cout << d1 << " + " << d2 << " = " << d3 << endl;

	return 0;
}
