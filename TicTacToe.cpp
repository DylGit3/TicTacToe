#include <iostream>
#include <string>

using namespace std;

int main()
{
	char board[3][3] =
	{
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '},
	};

	const char playerX = 'X';
	const char playerO = 'O';
	char currentPlayer = playerX;
	int r = -1;
	int c = -1;

	for (int i = 0; i < 9; ++i)
	{
		cout << "Current Player is " << currentPlayer << endl;
			//print game board
			cout << "   |   |   " << endl
			<< " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl
			<< "___|___|___" << endl
			<< "   |   |   " << endl
			<< " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl
			<< "___|___|___" << endl
			<< "   |   |   " << endl
			<< " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl
			<< "   |   |   " << endl;

		//get player input
		cout << "Current Player is " << currentPlayer << endl;
		cout << "Enter r c from 0-2 for row and column: ";
		cin >> r >> c;

		board[r][c] = currentPlayer;
		currentPlayer = (currentPlayer == playerX) ? playerO : playerX;
	}
}