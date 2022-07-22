#include <iostream>

using namespace std;

void ChessPlate() {

	char letter = 97;
	int number = 8;

	// drawing materials
	char VerticalLine = 179;
	char HorizontalLine = 196;
	char RightUpperCorner = 218;
	char LeftUpperCorner = 191;
	char RightLowerCorner = 192;
	char LeftLowerCorner = 217;
	char LeftSides = 195;
	char UpperSideHorizontal = 194;
	char LowerSideHorizontal = 193;


	cout << "    ";

	for (int i = 0; i < 48; i++) {

		if (i == 0) {

			cout << RightUpperCorner;
			continue;

		}

		if (i % 6 == 0) {

			cout << UpperSideHorizontal;
			continue;

		}

		cout << HorizontalLine;

	}

	cout << LeftUpperCorner;

	for (int x = 0; x < 8; x++) {

		cout << "    ";

		for (int i = 0; i < 49; i++) {

			if (x > 0) {

				if (i == 0) {

					cout << LeftSides;
					continue;

				}

				if (i == 48) {

					cout << char(180);
					continue;

				}

				if (i % 6 == 0) {

					cout << char(197);
					continue;

				}

				cout << HorizontalLine;

			}

		}

		cout << endl;
		cout << " " << number << "  ";

		for (int y = 0; y < 8; y++) {

			cout << VerticalLine;
			cout << " " << letter << number << "  ";
			letter += 1;
			bool LetterChangeToStart = (letter == 105 ? letter = 97 : false);

		}

		cout << VerticalLine;
		cout << "   ";
		cout << endl;
		number -= 1;

	}

	cout << "    ";

	for (int i = 0; i < 48; i++) {

		if (i == 0) {

			cout << RightLowerCorner;
			continue;

		}

		if (i % 6 == 0) {

			cout << LowerSideHorizontal;
			continue;

		}

		cout << HorizontalLine;

	}

	cout << LeftLowerCorner;
	cout << endl;
	cout << "       ";

	for (int i = 0; i < 8; i++) {

		cout << letter << "     ";
		letter += 1;
		bool LetterChangeToStart = (letter == 105 ? letter = 97 : false);

	}

}

int main() {

	ChessPlate();

}