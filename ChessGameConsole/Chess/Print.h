#pragma once

#include <iostream>
#include <Windows.h>
#include "History.h"

using namespace std;

void Print(char Chess[10][10], int length) {
	char Info[8][50]
	{
		"Characters: ",
		" ",
		"White Pawn = 'P'\t---\tBlack Pawn = 'p' ",
		"White Knight = 'N'\t---\tBlack Knight = 'n' ",
		"White Rook = 'R'\t---\tBlack Rook = 'r' ",
		"White Bishop = 'B'\t---\tBlack Bishop = 'b' ",
		"White Queen = 'Q'\t---\tBlack Queen = 'q' ",
		"White King = 'K'\t---\tBlack King = 'k' "
	};

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "A  B  C  D  E  F  G  H \n\n";
	for (int i = 1; i <= length - 1; i++) {
		if (i <= length - 2) {
			for (int j = 1; j <= length - 2; j++) {
				if ((i + j) % 2 == 0) {
					SetConsoleTextAttribute(console, 0x70);
				}
				else {
					SetConsoleTextAttribute(console, 0x20);
				}
				cout << Chess[i][j] << "  ";
			}
			SetConsoleTextAttribute(console, 0x07);
			cout << "  " << i << '\t' << '\t' << Info[i - 1];
			cout << endl;
		}
		else {
			cout << endl;
			cout << "To move back, enter 'U'" << endl;
			for (int k = 0; k < HistoryLength + 1; k++) {
				cout << "\n" << "\t\t\t\t\t" << History[k];
			}
		}
	}
}
