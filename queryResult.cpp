#include "queryResult.h"

QueryResult::QueryResult() {

}

QueryResult::QueryResult(int o_playerNumber) {
	this->playerNumber = o_playerNumber;
}

QueryResult::QueryResult(int o_row, int o_col) {
	this->row = o_row;
	this->col = o_col;
}

QueryResult::QueryResult(int o_startRow, int o_startCol, int o_endRow, int o_endCol) {
	this->startRow = o_startRow;
	this->startCol = o_startCol;
	this->endRow = o_endRow;
	this->endCol = o_endCol;
}