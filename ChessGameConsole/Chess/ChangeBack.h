#pragma once

void ChangeBack(char Chess[10][10], char TempChess[10][10], char CheckerTempChess[10][10], bool& color) {
	int count = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (Chess[i][j] == CheckerTempChess[i][j]) {
				count++;
			}
		}
	}

	if (count == 100) {
		return;
	}

	color = !color;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			Chess[i][j] = TempChess[i][j];
		}
	}

	CopyArr(Chess, CheckerTempChess, 10);

}