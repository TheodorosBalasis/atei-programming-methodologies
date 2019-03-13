#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void cps(char *t, char *s, int n);

int main() {
	char s[30], t[50];

	for (int i = 0; i < 50; i++) {
		t[i] = '.';
	}

	cout << "Enter a (max) 30 character string: ";
	cin >> s;

	cout << "Pre-copy string: " << t << endl;
	cps(t, s, 30);
	cout << "Post-copy string: " << t << endl;

	return 0;
}

void cps(char *t, char *s, int n) {
	for (int i = 0; s[i] != 0 && t[i] != 0 && i < n; i++) {
		t[i] = s[i];
	}
}