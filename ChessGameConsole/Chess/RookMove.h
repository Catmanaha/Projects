#pragma once

#include "ArrayPlusOne.h"

void RookMove(char Chess[10][10], int number, int letter, int* CoorX, int* CoorY, int& MoveLength, int** arr, bool& color, char min, char max) {
	int AppendLength = 1;
	int Move1 = 1;
	int Move2 = 1;
	int Move3 = 1;
	int Move4 = 1;
	int check = 1;

	for (int i = 1; i <= AppendLength; i++) {
		if (Move1) {
			if (Chess[number - i][letter] == ' ') {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = -i;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = 0;
			}
			else if (min <= Chess[number - i][letter] && Chess[number - i][letter] <= max) {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = -i;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = 0;
				Move1--;
			}
			else {
				Move1--;
			}
		}
		if (Move2) {
			if (Chess[number + i][letter] == ' ') {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = i;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = 0;
			}
			else if (min <= Chess[number + i][letter] && Chess[number + i][letter] <= max) {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = i;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = 0;
				Move2--;
			}
			else {
				Move2--;
			}
		}
		if (Move3) {
			if (Chess[number][letter + i] == ' ') {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = 0;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = i;
			}
			else if (min <= Chess[number][letter + i] && Chess[number][letter + i] <= max) {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = 0;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = i;
				Move3--;
			}
			else {
				Move3--;
			}
		}
		if (Move4) {
			if (Chess[number][letter - i] == ' ') {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = 0;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = -i;
			}
			else if (min <= Chess[number][letter - i] && Chess[number][letter - i] <= max) {
				CoorX = ArrayPlusOne(CoorX, MoveLength);
				CoorX[MoveLength] = 0;
				CoorY = ArrayPlusOne(CoorY, MoveLength);
				CoorY[MoveLength++] = -i;
				Move4--;
			}
			else {
				Move4--;
			}
		}
		if (Move1 || Move2 || Move3 || Move4) {
			AppendLength++;
		}
	}
	arr[0] = CoorX;
	arr[1] = CoorY;
}