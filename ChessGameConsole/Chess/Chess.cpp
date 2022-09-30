#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
#include "Print.h"
#include "PlayerMove.h"
#include "Checkmate.h"
#include "ChangeBack.h"

using namespace std;

int main() {
	const int length = 10;
	bool color = 1;
	char TempChess[length][length];
	char CheckerTempChess[length][length];



	char Chess[length][length] =
	{
		{ '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' },
		{ '.', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r', '.' },
		{ '.', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '.' },
		{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
		{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
		{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
		{ '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '.' },
		{ '.', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '.' },
		{ '.', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', '.' },
		{ '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' }
	};

	CopyArr(Chess, TempChess, length);
	CopyArr(Chess, CheckerTempChess, length);

	while (true) {
		int letter = -64;
		int number = -48;
		system("cls");

		if (CheckIfKingDead(Chess, length) && color == 1) {
			system("cls");
			cout << "Black Won!!" << endl;
			exit(0);
		}
		else if (CheckIfKingDead(Chess, length) && color == 0) {
			system("cls");
			cout << "White Won!!" << endl;
			exit(1);
		}

		cout << ((color) ? "White Move: \n\n" : "Black Move: \n\n");
		Print(Chess, length);
		cout << endl;
		cout << "Enter the letter: " << endl;
		letter += _getch();
		if (letter == 21) {
			ChangeBack(Chess, TempChess, CheckerTempChess, color);
			continue;
		}
		cout << "Enter the number: " << endl;
		number += _getch();

		CopyArr(Chess, TempChess, length);
		PlayerMove(Chess, TempChess, letter, number, length, color, HistoryLength, History);
	}
}