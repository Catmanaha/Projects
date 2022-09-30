#pragma once

#include "ArrayPlusOne.h"

void KnightMove(char Chess[10][10], int number, int letter, int* CoorX, int* CoorY, int& MoveLength, int** arr, bool& color, char min, char max) {
	const int Length = 8;

	int KnightMoves[][Length]
	{
		{-2, 1},
		{-2, -1},
		{-1, 2},
		{-1, -2},
		{1, 2},
		{1, -2},
		{2, -1},
		{2, 1},
	};

	for (int i = 0; i < Length; i++) {
		for (int j = 0; j < 1; j++) {
			if (Chess[number + KnightMoves[i][j]][letter + KnightMoves[i][j + 1]] == ' ' || (min <= Chess[number + KnightMoves[i][j]][letter + KnightMoves[i][j + 1]] && Chess[number + KnightMoves[i][j]][letter + KnightMoves[i][j + 1]] <= max)) {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = KnightMoves[i][j];
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = KnightMoves[i][j + 1];
			}
		}
	}

	arr[0] = CoorX;
	arr[1] = CoorY;
}
