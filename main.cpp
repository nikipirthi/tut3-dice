#include<iostream>
#include "dice.h"
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	dice Mydice;
	int x;
	int y;		
	int z[10] = { 5, 2, 11, 92, 71, 28, 111, 22, 43, 22 };

	cout << "Please enter the amount of rolls you want " << endl;
	cin >> y;
	cout << endl;

	for (x = 1; x <= y; x++)
	{
		Mydice.roll();
		Mydice.Average();
		Mydice.print();
		cout << endl;
	}



	cout << endl;
	cout << "The array average is: " << endl << Average(10, z) << endl;


	system("pause");
	return 0;
}