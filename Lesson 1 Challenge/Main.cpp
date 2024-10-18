#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int player1Num = rand() % 11;
	int player2Num = rand() % 11;
	int player1Guess;
	int player2Guess;

	//cout << player1Num << endl;
	//cout << player2Num << endl;


	for (int i = 0; i < 6; i++)
	{
		
		cout << "Player 1, guess a number between 1 and 10" << endl; 
		cin >> player1Guess;
		if (player1Num == player1Guess)
		{
			cout << "You win!" << endl;
		}
		else {
			cout << "Try again!" << endl;
		}

		cout << "Player 2, guess a number between 1 and 10" << endl;
		cin >> player2Guess;
		if (player2Num == player2Guess)
		{
			cout << "You win!" << endl;
		}
		else {
			cout << "Try again!" << endl;
		}
	}
}

