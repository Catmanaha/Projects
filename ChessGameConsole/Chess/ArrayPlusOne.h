#pragma once

#include <iostream>

int* ArrayPlusOne(int* arr, int& length) {
	int* NewArr = new int[length + 1];

	for (int i = 0; i < length; i++) {
		NewArr[i] = arr[i];
	}
	arr = nullptr;
	delete[] arr;

	return NewArr;
}

char** ArrayPlusOne(char** arr, int& length) {
	char** NewArr = new char* [length + 1];

	for (int i = 0; i < length + 1; i++) {
		NewArr[i] = arr[i];
	}

	for (int i = 0; i < length; i++) {
		arr[i] = nullptr;
		delete[] arr[i];
	}

	arr = nullptr;
	delete[] arr;

	return NewArr;
}

void CopyArr(char Chess[10][10], char TempChess[10][10], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			TempChess[i][j] = Chess[i][j];
		}
	}
}