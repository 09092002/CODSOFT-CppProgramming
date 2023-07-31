#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0; 
	srand(time(0)); //Seed Random Number Generator
	num = rand() % 10 + 1; // Random number between 1 and 100
	cout << "Hello, my name is Harsh Tiwari, and you are participating in Number Guessing Game \nLet's Get Started\n\n";

	do
	{
		cout << "Enter a guess between 1 and 10 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}
