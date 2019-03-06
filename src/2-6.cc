#include <iostream>

using std::cout;
using std::endl;

void emfa(int n);

int main() {
	emfa(20);
	cout << endl;
	emfa(7);
	cout << endl;
	
	return 0;
}

void emfa(int n) {
	for (int i = 0; i < n; i++) {
		cout << '*';
	}
}