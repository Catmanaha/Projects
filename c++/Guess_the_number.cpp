#include <iostream>
using namespace std;

int main() {

	int min_range;
	int max_range;
	int number;

	cout << "Enter the minimum range: ";
	cin >> min_range;
	cout << "Enter the maximum range: ";
	cin >> max_range;
	cout << "Enter your number";
	cin >> number;
	bool chose;
	int answer;

	if (number < min_range || number > max_range) {
		while (number < min_range || number > max_range) {
			cout << "Enter a number in between of " << min_range << " and " << max_range << ": " << endl;
			cin >> number;
		}
	}
	else {

	}
	while (true) {
		int count = (min_range + max_range) / 2;


		if (count != number) {
			cout << "Is your number more or less than " << count << "?" << endl;
			cout << "Input '1' for more\nInput '0' for less " << endl;
			cin >> chose;

			if (chose) {
				min_range = count;
			}

			else {
				max_range = count;
			}

		}
		else {
			cout << "Your number is " << count;
			break;
		}
	}


}