#pragma once

#include "ArrayPlusOne.h"

void PawnMove(char Chess[10][10], int number, int letter, int* CoorX, int* CoorY, int& MoveLength, int** arr, bool& color, char min, char max) {
	char WhitePawnMoves[][4]
	{
		{-1, 0},
		{-2, 0},
		{-1, 1},
		{-1, -1}
	};

	char BlackPawnMoves[][4]
	{
		{1, 0},
		{2, 0},
		{1, 1},
		{1, -1}
	};

	if (color) {
		if (Chess[number + WhitePawnMoves[0][0]][letter + WhitePawnMoves[0][1]] == ' ' && Chess[number + WhitePawnMoves[0][0]][letter + WhitePawnMoves[0][1]] != '.') {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = -1;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = 0;
		}
		if (number == 7 && Chess[number + WhitePawnMoves[0][0]][letter + WhitePawnMoves[0][1]] == ' ' && Chess[number + WhitePawnMoves[1][0]][letter + WhitePawnMoves[1][1]] == ' ' && Chess[number + WhitePawnMoves[0][0]][letter + WhitePawnMoves[0][1]] != '.' && Chess[number + WhitePawnMoves[1][0]][letter + WhitePawnMoves[1][1]] != '.') {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = -2;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = 0;
		}
		if (Chess[number + WhitePawnMoves[2][0]][letter + WhitePawnMoves[2][1]] != ' ' && (min <= Chess[number + WhitePawnMoves[2][0]][letter + WhitePawnMoves[2][1]] && Chess[number + WhitePawnMoves[2][0]][letter + WhitePawnMoves[2][1]] <= max)) {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = -1;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = 1;
		}
		if (Chess[number + WhitePawnMoves[3][0]][letter + WhitePawnMoves[3][1]] != ' ' && (min <= Chess[number + WhitePawnMoves[3][0]][letter + WhitePawnMoves[3][1]] && Chess[number + WhitePawnMoves[3][0]][letter + WhitePawnMoves[3][1]] <= max)) {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = -1;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = -1;
		}
	}
	else {
		if (Chess[number + BlackPawnMoves[0][0]][letter + BlackPawnMoves[0][1]] == ' ' && Chess[number + BlackPawnMoves[0][0]][letter + BlackPawnMoves[0][1]] != '.') {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = 1;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = 0;
		}
		if (number == 2 && Chess[number + BlackPawnMoves[0][0]][letter + BlackPawnMoves[0][1]] == ' ' && Chess[number + BlackPawnMoves[1][0]][letter + BlackPawnMoves[1][1]] == ' ' && Chess[number + BlackPawnMoves[0][0]][letter + BlackPawnMoves[0][1]] != '.' && Chess[number + BlackPawnMoves[1][0]][letter + BlackPawnMoves[1][0]] != '.') {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = 2;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = 0;
		}
		if (Chess[number + BlackPawnMoves[2][0]][letter + BlackPawnMoves[2][1]] != ' ' && (min <= Chess[number + BlackPawnMoves[2][0]][letter + BlackPawnMoves[2][1]] && Chess[number + BlackPawnMoves[2][0]][letter + BlackPawnMoves[2][1]] <= max)) {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = 1;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = 1;
		}
		if (Chess[number + BlackPawnMoves[3][0]][letter + BlackPawnMoves[3][1]] != ' ' && (min <= Chess[number + BlackPawnMoves[3][0]][letter + BlackPawnMoves[3][1]] && Chess[number + BlackPawnMoves[3][0]][letter + BlackPawnMoves[3][1]] <= max)) {
			CoorX = ArrayPlusOne(CoorX, MoveLength);
			CoorX[MoveLength] = 1;
			CoorY = ArrayPlusOne(CoorY, MoveLength);
			CoorY[MoveLength++] = -1;
		}
	}

	arr[0] = CoorX;
	arr[1] = CoorY;
}