#pragma once

#include <iostream>
#include "ArrayPlusOne.h"
#include "ChangeBack.h"
#include "History.h"

using namespace std;

void Move(char Chess[10][10], char TempChess[10][10], char temp, int** arr, int letter, int number, int MoveLength, bool& color) {
	int choose;
	int* Check = new int[MoveLength];
	int EvaluateLength = MoveLength - MoveLength;
	for (int i = 0; i < MoveLength; i++) {
		cout << "Enter '" << i + 1 << "' to move to " << char(letter + arr[1][i] + '@') << number + arr[0][i] << endl;
		Check[i] = i + 1;
		if (i == MoveLength - 1) {
			cin >> choose;
			if (!cin.good()) {
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}

			if (choose == Check[EvaluateLength + choose - 1]) {
				Chess[number][letter] = ' ';
				Chess[number + arr[0][EvaluateLength + choose - 1]][letter + arr[1][EvaluateLength + choose - 1]] = temp;
				color = (color) ? 0 : 1;
				char* HistoryMovementsForward = new char[13]
				{
					'\'',
					temp,
					'\'',
					' ',
					(char)(letter + 64),
					(char)(number + 48),
					' ',
					'-',
					'>',
					' ',
					(char)(letter + arr[1][EvaluateLength + choose - 1] + 64),
					(char)(number + arr[0][EvaluateLength + choose - 1] + 48),
					'\0'
				};
				History = ArrayPlusOne(History, HistoryLength);
				History[++HistoryLength] = HistoryMovementsForward;
			}
		}
	}
}