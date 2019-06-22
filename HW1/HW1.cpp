// HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std; 

bool checkTheNumber(int g, int r); 
string rateTheScore(int g); 

int main()
{
	cout << "Hello World!" << endl; 

	// initialize the random see
	srand(time(NULL)); 

	string name = "";
	int randomNumber = rand() % 100 + 1; // range between 1 and 100
	int guess = 0; 
	int guessCounter = 0; 
	bool loopBreak = false; 


	cout << "Lets play a Number Guessing Game!  What is your name?" << endl; 
	cin >> name; 

	do
	{
		cout << name + " guess a number between 1 and 100" << endl;
		cin >> guess;
		cout << randomNumber << endl;
		loopBreak = checkTheNumber(guess, randomNumber);

		if (loopBreak == true)
		{
			guessCounter = guessCounter + 1;
			break;
		}
		else
		{
			guessCounter = guessCounter + 1;
		}

	} while (loopBreak != true);

	cout << "It took you " << guessCounter << " guesses " << name << endl;

	cout << rateTheScore(guessCounter) << endl; 

	system("pause"); 
	return 0; 

}

bool checkTheNumber(int g, int r)
{
	string low = "Too low!"; 
	string high = "Too high!"; 
	string correct = "You win!!!"; 

	if (g < r)
	{ 
		cout << low << endl; 
		return false; 
	}
	else if (g > r)
	{
		cout << high << endl;
		return false;
	}
	else
	{
		cout << correct << endl; 
		return true; 
	}
}

string rateTheScore(int g)
{
	if (g >= 0 && g <= 4)
	{
		return "Amazing! Or was it luck?"; 
	}
	else if (g >= 5 && g <= 6)
	{
		return "That's a very good score...";
	}
	else if (g >= 7 && g <= 8)
	{
		return  "That's pretty good but you can do better...";
	}
	else if (g >= 9 && g <= 10)
	{
		return "Not too shabby, but not too good either..."; 
	}
	else
	{
		return "What a terrible score!...";
	}
}
