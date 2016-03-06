#pragma once
#ifndef dice_H
#define dice_H

class dice
{
private:

	int current;
	int counter;
	float no_ofrolls;
	float Avg;

public:

	dice();
	int getcurrent();
	void setcurrent(int x);

	int getcounter();
	void setcounter();

	int roll();
	void settotal(int x);
	float gettotal();
	int number();

	void Average();
	float getAverage();
	void print();
};

#endif

float Average(int x, int s[]);
int randomgen();
