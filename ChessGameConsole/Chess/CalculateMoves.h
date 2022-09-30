#pragma once

#include "PawnMove.h"
#include "RookMove.h"
#include "KnightMove.h"
#include "BishopMove.h"
#include "QueenMove.h"
#include "KingMove.h"
#include "PlayerMove.h"

int** CalculateMoves(char Chess[10][10], char TempChess[10][10], int temp, int letter, int number, int& MoveLength, bool& color, char min, char max) {
	int Length = 2;
	int* CoorX = new int[MoveLength] {};
	int* CoorY = new int[MoveLength] {};
	int** arr = new int* [Length] {};

	if (color) {
		if (temp == 'P') {
			PawnMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'N') {
			KnightMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'K') {
			KingMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'R') {
			RookMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'B') {
			BishopMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'Q') {
			QueenMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
	}
	else {
		if (temp == 'p') {
			PawnMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'n') {
			KnightMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'k') {
			KingMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'r') {
			RookMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'b') {
			BishopMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
		else if (temp == 'q') {
			QueenMove(Chess, number, letter, CoorX, CoorY, MoveLength, arr, color, min, max);
		}
	}

	return arr;
}