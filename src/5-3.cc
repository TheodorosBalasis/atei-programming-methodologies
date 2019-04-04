#include <iostream>

using std::atoi;
using std::cout;
using std::endl;

int main(int argc, char **argv) {
	int a, b;

	a = atoi(argv[2]);
	b = atoi(argv[3]);

	cout << a + b << endl;

	return 0;
}