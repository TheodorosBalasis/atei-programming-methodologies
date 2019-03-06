#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Enter characters to get their type. Enter X or x to quit." << endl;

	int sixSum = 0, lowercaseCount = 0, numericCount = 0, numericSum = 0;

	char input;
	do {
		cout << "> ";
		cin >> input;

		if (input == 'R') {
			continue;
		}

		if (input == 'F') {
			input = 'f';
		} else if (input == 'P') {
			input = 'p';
		} else if (input == 'A') {
			input = 'a';
		}

        // Check input character type based on ASCII.
        bool inputAlpha = input >= 65 && input <= 90;
        inputAlpha = inputAlpha || (input >= 97 && input <= 122);
        bool inputNum = input >= 48 && input <= 57;
        bool inputSpecial = input >= 33 && input <= 47;
        inputSpecial = inputSpecial || (input >= 58 && input <= 64);
        inputSpecial = inputSpecial || (input >= 91 && input <= 96);
        inputSpecial = inputSpecial || (input >= 123 && input <= 126);

        if (inputAlpha) {
			cout << "Character is alphabetic." << endl;

			if (input >= 65 && input <= 90) {
				lowercaseCount++;
			}
        } else if (inputNum) {
			cout << "Character is numeric." << endl;
			numericCount++;

			int num = (int)input;

			numericCount++;
			numericSum += num;

			if (num == 6) {
				sixSum += num;
			}
        } else if (inputSpecial) {
			cout << "Character is special." << endl;
        } else {
			cout << "Character is control character." << endl;
        }
	} while (input != 'X' && input != 'x');

	cout << "Number of lowercase chars: " << lowercaseCount << endl;
	cout << "Number of numeric chars: " << numericCount << endl;
	cout << "Sum of numeric chars: " << numericSum << endl;

    return 0;
}