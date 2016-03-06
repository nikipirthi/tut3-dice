#include "dice.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

dice::dice()
{
	current = 0;
	counter = 0;
	no_ofrolls = 0;
	Avg = 0;
}

void dice::setcounter()
{
	counter = counter + 1;
}



int dice::getcounter()
{
	return counter;
}

void dice::setcurrent(int x)
{
	current = x;

}

int dice::roll()
{
	setcurrent(number());
	setcounter();
	settotal(getcurrent());
	return getcurrent();
}

int dice::number()

{
	return (1 + rand() % 5);

}

void dice::print()
{
	cout << "Your current number of rolls " << getcurrent() << endl;
	cout << "The number rolled is  :" << getcounter() << endl;
	cout << "Your average is " << getAverage() << endl;

}

int randomgen()
{
	srand(time(NULL));
	return (1 + rand() % 5);
}

int dice::getcurrent()
{
	return current;
}

void dice::settotal(int x)
{
	no_ofrolls = x + no_ofrolls;
}

void dice::Average()
{
	Avg = gettotal() / getcounter();
}

float dice::gettotal()
{
	return no_ofrolls;
}

float dice::getAverage()
{
	return Avg;
}

float Average(int n, int s[])
{
	int x;
	float Total = 0;

	for (x = 0; x<n; x++)
	{
		Total = Total + s[x];
	}

	return (Total / n);
}