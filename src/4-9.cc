#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::rand;

void eis(char a[][100], int n);
void aon(char *s);
void emf1(char *pa[], int n);
void emf2(char **pp, int n);

int main() {
	int n;

	cout << "Enter number of student names to generate: ";
	cin >> n;

	char a[n][100], *pa[n];
	eis(a, n);

	for (int i = 0; i < 10; i++) {
		int randIndex = rand() % (n + 1);
		aon(a[randIndex]);
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		pa[i] = a[i];
	}

	emf1(pa, n);
	cout << endl;

	char **pp = pa;

	emf2(pp, n);
	cout << endl;

	return 0;
}

void eis(char a[][100], int n) {
	for (int i = 0; i < n; i++) {
		int lastNameSize = rand() % 15 + 6;
		int firstNameSize = rand() % 9 + 4;

		for (int j = 0; j < lastNameSize; j++) {
			a[i][j] = rand() % 26 + 65;
		}

		a[i][lastNameSize] = ' ';

		for (int j = lastNameSize + 1; j < lastNameSize + firstNameSize; j++) {
			a[i][j] = rand() % 26 + 65;
		}

		a[i][lastNameSize + firstNameSize] = 0;
	}
}

void aon(char *s) { cout << s << endl; }

void emf1(char *pa[], int n) {
	for (int i = 0; i < n; i++) {
		int nameIndex = 0;
		bool nameReached = false;
		char secondLetter;

		for (int j = 0; pa[i][j] != 0; j++) {
			if (nameReached) {
				if (nameIndex == 1) {
					secondLetter = pa[i][j];
				}
				cout << pa[i][j];
				nameIndex++;
			}

			if (!nameReached && pa[i][j] == ' ') {
				nameReached = true;
			}
		}

		cout << ' ' << secondLetter << endl;
	}
}

void emf2(char **pp, int n) {
	for (int i = 0; i < n; i++) {
		int nameIndex = 0;
		bool nameReached = false;
		char thirdLetter;

		for (int j = 0; pp[i][j] != 0; j++) {
			if (nameReached) {
				if (nameIndex == 2) {
					thirdLetter = pp[i][j];
				}
				cout << pp[i][j];
				nameIndex++;
			}

			if (!nameReached && pp[i][j] == ' ') {
				nameReached = true;
			}
		}

		cout << ' ' << thirdLetter << endl;
	}
}