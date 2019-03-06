#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // Variable declaration and initialization.
    int temps = 0, tempSum = 0, hotTemps = 0, hotTempSum = 0, coldTemps = 0;
    int coldTempSum = 0, idealTemps = 0, maxTemp = -50, minTemp = 60;

    // Informational output.
    cout << "Allowed temperature range is [-50, 60]. Enter -999 to quit.";
    cout << endl;

    // Input loop.
    for (int temp = 0; temp != -999;) {
        cout << "> ";
        cin >> temp;

        // Check if temp is in allowed range.
        if (temp >= -50 && temp <= 60) {
            temps++;
            tempSum += temp;

            if (temp > maxTemp) {
                maxTemp = temp;
            }

            if (temp < minTemp) {
                minTemp = temp;
            }

            // Hot temp check.
            if (temp > 17 && temp <= 28) {
                hotTemps++;
                hotTempSum += temp;

                // Ideal temp check.
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
    }

    cout << "Number of temps entered: " << temps << endl;
    cout << "Average temp: ";
    cout << (temps > 0 ? (float)tempSum / (float)temps : 0);
    cout << endl;

    cout << "Number of hot temps: " << hotTemps << endl;
    cout << "Hot temp average: ";
    cout << (hotTemps > 0 ? (float)hotTempSum / (float)hotTemps : 0);
    cout << endl;

    cout << "Number of cold temps: " << coldTemps << endl;
    cout << "Cold temp average: ";
    cout << (coldTemps > 0 ? (float)coldTempSum / (float)coldTemps : 0);
    cout << endl;

    cout << "Number of ideal temps: " << idealTemps << endl;

    cout << "Maximum temperature: " << maxTemp << endl;
    cout << "Minimum temperature: " << minTemp << endl;

    return 0;
}