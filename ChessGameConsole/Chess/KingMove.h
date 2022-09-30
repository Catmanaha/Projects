#pragma once

#include "ArrayPlusOne.h"

void KingMove(char Chess[10][10], int number, int letter, int* CoorX, int* CoorY, int& MoveLength, int** arr, bool& color, char min, char max) {
	const int Length = 8;

	int KingMoves[][Length]
	{
		{-1, 0},
		{1, 0},
		{0, -1},
		{0, 1},
		{-1, -1},
		{1, -1},
		{-1, 1},
		{1, 1},
	};

	for (int i = 0; i < Length; i++) {
		for (int j = 0; j < 1; j++) {
			if (Chess[number + KingMoves[i][j]][letter + KingMoves[i][j + 1]] == ' ' || (min <= Chess[number + KingMoves[i][j]][letter + KingMoves[i][j + 1]] && Chess[number + KingMoves[i][j]][letter + KingMoves[i][j + 1]] <= max)) {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = KingMoves[i][j];
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = KingMoves[i][j + 1];
			}
		}
	}

	arr[0] = CoorX;
	arr[1] = CoorY;
}
