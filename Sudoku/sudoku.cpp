#include <iostream>
#include "sudoku.h"

using namespace std;

//Create Sudoku Grid
sudoku::sudoku() {
	int shownNum;
	int change=0;

	for (int i = 0;i < length;i++) {
		shownNum = rand() % 5;
		for (int j = 0;j < length;j++) {
			change = rand() % 1;
			if (change == 1 && shownNum > 0) {
				changeNum(&i,&j);
				shownNum--;
			}
		}
	}
}

//change grid number
void sudoku::changeNum(int* i, int* j) {
	int newNum;
	bool isIn = true;
	do {
		newNum = rand() % 9 + 1;
		isIn = checkNum(&newNum, i, j);
	} while (isIn);

	grid[*i][*j] = newNum;
}

//check for duplicates in row and column
bool sudoku::checkNum(int* num, int* i, int* j) {
	bool isIn = false;

	//check row for duplicate
	for (int row = 0;row < length;row++) {
		if (grid[row][*j] == *num) {
			isIn = true;
			break;
		}
	}

	//check column for duplicate
	if (isIn == false) {
		for (int col = 0;col < length;col++) {
			if (grid[*i][col] == *num) {
				isIn = true;
				break;
			}
		}
	}

	return isIn;
}

//print
void sudoku::printGrid() {

}