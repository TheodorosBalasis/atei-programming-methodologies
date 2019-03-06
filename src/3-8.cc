#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void eis(double x[][3], int n);
void ant(double x[][3], int y[][3], int n);
int emf(int y[][3], int n);

int main() {
	double x[4][3];
	int y[4][3];

	eis(x, 4);
	ant(x, y, 4);
	int nonZero = emf(y, 4);

	cout << "Non-zero elements of y: " << nonZero << endl;

	return 0;
}

void eis(double x[][3], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter x[" << i << ',' << j << "]: ";
			cin >> x[i][j];
		}
	}
}

void ant(double x[][3], int y[][3], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			if (x[i][j] > 0) {
				y[i][j] = 1;
			} else if (x[i][j] < 0) {
				y[i][j] = -1;
			} else {
				y[i][j] = 0;
			}
		}
	}
}

int emf(int y[][3], int n) {
	int nonZero = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "y[" << i << ',' << j << "]: " << y[i][j] << endl;
			if (y[i][j] != 0) {
				nonZero++;
			}
		}
	}

	return nonZero;
}