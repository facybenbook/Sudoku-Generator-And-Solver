#pragma once

class Sudoku
{
private:
	int m_Table[9][9];
public:
	bool CheckEquality(int row, int column, int value);
};