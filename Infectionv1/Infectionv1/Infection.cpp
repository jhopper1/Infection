#include <iostream>
#include "Infection.h"

using namespace std;

gameBoard* gameBoard::gbInstance = NULL;

gameBoard* gameBoard::Instance()
{
	if (!gbInstance)
	{
		gbInstance = new gameBoard;
	}

	return gbInstance;
}

bool gameBoard::createGameBoard()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				gameTiles[i][j][k] = new gameTile();
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				gameTiles[i][j][k] = new gameTile();
			}
		}
	}
}