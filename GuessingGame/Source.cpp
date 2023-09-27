#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

bool checker(int guess, int number, int& guesses)
{
	if (guess > number)
	{
		cout << "\nToo High! Try Again\n\n";
		guesses++;
		return false;
	}
	else if (guess < number)
	{
		cout << "\nToo Low! Try Again\n\n";
		guesses++;
		return false;
	}
	else if (guess == number)
	{
		cout << "\nYOU GOT IT IN "<<guesses<<" guesses!\nCONGRATULATIONS!!!\n\n";
		return true;
	}
}

void gameStart()
{
	cout << "Welcome to the Number guesser!\n\n";
	cout << "A Random Number has been Generated Between 0-100\n\nIts your Goal to Figure it out!\n\nGood Luck\n\n";
	cout << "Enter Your First Guess: ";
}

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	int number, guess, guesses = 0;
	number = rand() % 101;
	gameStart();
	cin >> guess;

	while (!checker(guess, number, guesses))
	{
		cin >> guess;
	}
}