// HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

void listPrimes(int x); 

int main()
{
	cout << "Hello World!" << endl; 
	cout << endl;
	listPrimes(3);
	cout << endl; 
	listPrimes(2);
	cout << endl;
	listPrimes(15);
	listPrimes(13);

	return 0; 
	system("pause"); 
}

void listPrimes(int x)
{
	for (int i = 2; i < x; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break; 
			}
			else if(i == j+1)
			{
				cout << i << " ";
			}
		}
	}
}

