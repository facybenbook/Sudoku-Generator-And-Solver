#include "Sudoku.h"

bool Sudoku::CheckEquality(int row, int column, int value)
{
	return m_Table[row][column] == value ? true : false;
}