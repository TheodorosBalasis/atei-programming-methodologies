#include <iostream>

using std::cout;
using std::endl;

void emfa(void);

int main() {
	emfa();
	cout << endl;

	return 0;
}

void emfa(void) {
	for (int i = 0; i < 80; i++) {
		cout << '*';
	}
}