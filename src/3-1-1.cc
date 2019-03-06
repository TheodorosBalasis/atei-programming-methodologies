

void fmath(int x, float &y);

int main() {
	float g;

	fmath(4, g);

	return 0;
}

void fmath(int x, float &y) {
	y = (x * x * x) + (5 * x * x) + (8.1 * x) + 9.6;
}