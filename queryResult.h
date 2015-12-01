#pragma once
#include "player.h"

class QueryResult {
public:
	int row;
	int col;
	int startRow;
	int startCol;
	int endRow;
	int endCol;
	int playerNumber;
public:
	QueryResult();
	QueryResult(int);
	QueryResult(int, int);
	QueryResult(int, int, int, int);
};
