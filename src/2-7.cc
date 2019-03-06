#include <iostream>

using std::cout;
using std::endl;

float fmath(int x);

int main() {
	float g;
	g = fmath(4);

	cout << g << endl;

	return 0;
}

float fmath(int x) {
	return (x*x*x) + (5 * (x*x)) + (8.1 * x) + 9.6;
}