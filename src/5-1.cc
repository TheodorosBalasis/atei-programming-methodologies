#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int len(char *s);
int at(char *s);
void F(char *mes, char *s, int (*fp)(char *));

int main() {
	char *s;

	cin >> s;

	int (*fp)(char *);

	fp = len;
	cout << "String length: " << fp(s) << endl;
	fp = at;
	cout << "Position of 'G': " << fp(s) << endl << endl;

	fp = len;
	F("String length: ", s, fp);
	fp = at;
	F("Position of 'G': ", s, fp);

	return 0;
}

int len(char *s) {
	int count = 0;
	for (int i = 0; s[i] != 0; i++) {
		count++;
	}
	return count;
}

int at(char *s) {
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == 'G') {
			return i;
		}
	}

	return -1;
}

void F(char *mes, char *s, int (*fp)(char *)) {
	cout << mes << fp(s) << endl;
}