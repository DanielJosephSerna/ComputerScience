// HW3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std; 

int main()
{
	cout << "Hello World!" << endl;

	// initialize the random see
	srand(time(NULL));

	int dice1 = 0; // rand() % 6 + 1; // range between 1 and 6
	int dice2 = 0; // rand() % 6 + 1;
	int total = 0; 

	int numberOfRolls = 0; 

	int arr[11];
	arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = arr[7] = arr[8] = arr[9] = arr[10] = 0;

	cout << "Enter a number of rolls: "; 
	cin >> numberOfRolls; 

	for (int i = 0; i < numberOfRolls; i++)
	{
		dice1 = rand() % 6 + 1; // range between 1 and 6
		dice2 = rand() % 6 + 1;

		total = dice1 + dice2; 

		cout << total << " ";
		 
		if (total == 2)
		{
			arr[0] = arr[0] + 1; 
			// cout << arr[0];
		}
		else if (total == 3)
		{
			arr[1] = arr[1] + 1;
			// cout << arr[1];
		}
		else if (total == 4)
		{
			arr[2] = arr[2] + 1;
			// cout << arr[2];
		}
		else if (total == 5)
		{
			arr[3] = arr[3] + 1;
		}
		else if (total == 6)
		{
			arr[4] = arr[4] + 1;
		}
		else if (total == 7)
		{
			arr[5] = arr[5] + 1;
		}
		else if (total == 8)
		{
			arr[6] = arr[6] + 1;
		}
		else if (total == 9)
		{
			arr[7] = arr[7] + 1;
		}
		else if (total == 10)
		{
			arr[8] = arr[8] + 1;
		}
		else if (total == 11)
		{
			arr[9] = arr[9] + 1;
		}
		else if (total == 12)
		{
			arr[10] = arr[10] + 1;
		}

		dice1 = 0;
		dice2 = 0;
		total = 0;
	}

	for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
	{
		cout << endl; 
		cout << i+2 << ": " << (double) arr[i]/ numberOfRolls << endl;
	}

	

	return 0; 
	system("pause");
}

