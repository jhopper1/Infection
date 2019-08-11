#pragma once
#include <iostream>
using namespace std;

#define healthyState 0
#define deadState 1
#define immuneState 2

class gameBoard {
public:
	static gameBoard* Instance();
	const int gameTileCenter = 2;
	bool createGameBoard();
private:
	gameBoard() {};
	static gameBoard* gbInstance;
	gameTile gameTiles[5][5][5];
};

class gameTile {
public:
	gameTile();
private:
	int tileState = healthyState;
	int pointValue = 0;
};

class gamePiece {

};