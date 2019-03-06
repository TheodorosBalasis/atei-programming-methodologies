#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void diav(int *a, int n);
float moa(int *a, int n1, int n2);

int main() {
	int n1, n2;
	int a[10];

	cout << "Enter n1: ";
	cin >> n1;
	cout << "Enter n2: ";
	cin >> n2;

	if (n2 >= n1 && n2 <= 10) {
		diav(a, 10);
		cout << "Average: " << moa(a, n1, n2) << endl;
	}

	return 0;
}

void diav(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Enter number " << i << ": ";
		cin >> a[i];
	}
}

float moa(int *a, int n1, int n2) {
	int sum = 0;

	for (int i = n1; i <= n2; i++) {
		sum += a[i];
	}

	return (float)sum / (float)(n2 - n1 + 1);
}