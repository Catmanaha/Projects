#pragma once

bool CheckIfKingDead(char Chess[10][10], int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (Chess[i][j] == 'k') {
				count++;
			}

			if (Chess[i][j] == 'K') {
				count++;
			}
		}
	}
	return (count == 2) ? 0 : 1;
}

