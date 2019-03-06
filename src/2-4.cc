#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::rand;

int main() {
	int n, tempSum = 0, hotTemps = 0, hotTempSum = 0, coldTemps = 0;
	int coldTempSum = 0, idealTemps = 0, maxTemp = -20, minTemp = 30;
	int invalidTemps = 0;

	cout << "Enter the number of valid temps to generate: ";
	cin >> n;

	float temps[n];

	for (int i = 0; i < n; i++) {
		int temp;

		// Generate temps until a valid one is generated.
		do {
			temp = rand() % 101 - 60;

			// Valid temp check.
			if (temp < -20 || temp > 30) {
				invalidTemps++;
			} else {
				temps[i] = (float)temp;
				tempSum += temp;

				if (temp > maxTemp) {
					maxTemp = temp;
				}

				if (temp < minTemp) {
					minTemp = temp;
				}

				// Hot temp check
				if (temp > 17 && temp <= 28) {
					hotTemps++;
					hotTempSum += temp;

					if (temp == 22) {
						idealTemps++;
					}
				}
				// Cold temp check.
				else if (temp > 1 && temp <= 17) {
					coldTemps++;
					coldTempSum += temp;
				}
			}

		} while (temp < -20 || temp > 30);
	}

	cout << "Average temp: " << tempSum / n << endl;

	cout << "Hot temps: " << hotTemps << endl;
	cout << "Average hot temp: ";
	cout << (hotTemps > 0 ? hotTempSum / hotTemps : 0) << endl;

	cout << "Cold temps: " << coldTemps << endl;
	cout << "Average cold temp: ";
	cout << (coldTemps > 0 ? coldTempSum / coldTemps : 0) << endl;

	cout << "Ideal temps: " << idealTemps << endl;

	cout << "Max temp: " << maxTemp << endl;
	cout << "Min temp: " << minTemp << endl;

	cout << "Invalid temps: " << invalidTemps << endl;

	return 0;
}