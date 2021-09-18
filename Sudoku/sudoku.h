#pragma once
#ifndef SUDOKU
#define SUDOKU
#include <vector>

class sudoku {
	private:
		const int length = 9;
		int grid[9][9] = { 0 };
	public:
		sudoku();
		void printGrid();
		void changeNum(int*,int*);
		bool checkNum(int*, int*,int*);
};

#endif