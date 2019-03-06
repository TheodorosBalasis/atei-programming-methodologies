#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float diav(int a[], int n);
float methe(int a[], int n);
void zekr(int a[], int n, int& pze, float* mkr);
int perf(int a[], int n);
int* ptomx(int a[], int n);
short coldestIndex(int a[], int n);

int main() {
	int n = 0;

	cout << "Enter the number of temperatures to generate: ";
	cin >> n;

	int a[n];

	cout << "Invalid temps: " << diav(a, n) << endl;
	cout << "Average temp: " << methe(a, n) << endl;

	int pze;
	float mkr;

	zekr(a, n, pze, &mkr);

	cout << "Hot temps: " << pze << endl;
	cout << "Cold temp average: " << pze << endl;

	cout << "Ideal temps: " << perf(a, n) << endl;

	int* maxTemp = ptomx(a, n);

	cout << "Max temp address: " << maxTemp << endl;
	cout << "Max temp: " << *maxTemp << endl;

	short minTempIndex = coldestIndex(a, n);

	cout << "Min temp index: " << minTempIndex << endl;
	cout << "Min temp: " << a[minTempIndex] << endl;

	return 0;
}

float diav(int a[], int n) {
	float invalidTemps = 0;

	for (int i = 0; i < n; i++) {
		int temp;

		do {
			temp = rand() % 101 - 60;

			if (temp < -20 || temp > 30) {
				invalidTemps++;
			}
		} while (temp < -20 || temp > 30);

		a[i] = temp;
	}

	return invalidTemps;
}

float methe(int a[], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return (float)sum / (float)n;
}

void zekr(int a[], int n, int& pze, float* mkr) {
	int coldSum = 0, coldTemps = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > 17 && a[i] <= 28) {
			pze++;
		} else if (a[i] > 1 && a[i] <= 17) {
			coldTemps++;
			coldSum += a[i];
		}
	}

	*mkr = (float)coldSum / coldTemps > 0 ? (float)coldTemps : 1.0;
}

int perf(int a[], int n) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == 22) {
			count++;
		}
	}

	return count;
}

int* ptomx(int a[], int n) {
	int* maxPtr = &a[0];

	for (int i = 0; i < n; i++) {
		if (a[i] > *maxPtr) {
			maxPtr = &a[i];
		}
	}

	return maxPtr;
}

short coldestIndex(int a[], int n) {
	short index = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] < a[index]) {
			index = (short)i;
		}
	}

	return index;
}