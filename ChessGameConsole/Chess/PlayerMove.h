#pragma once

#include "Move.h"
#include "CalculateMoves.h"

void PlayerMove(char Chess[10][10], char TempChess[10][10], int letter, int number, int length, bool& color, int& HistoryLength, char** History) {
	int temp = Chess[number][letter];
	char min = (color) ? 'a' : 'A';
	char max = (color) ? 'z' : 'Z';
	int MoveLength = 0;

	Move(Chess, TempChess, temp, CalculateMoves(Chess, TempChess, temp, letter, number, MoveLength, color, min, max), letter, number, MoveLength, color);
}