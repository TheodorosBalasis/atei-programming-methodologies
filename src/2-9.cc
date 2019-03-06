

float ypol(int x, float k = 0.095);

int main() {
	int x = 67;
	float g = 0.11;

	float f = ypol(66, 0.15);
	f = ypol(x, g);

	f = ypol(30, 0.33);
	float y = ypol(30);

	return 0;
}

float ypol(int x, float k) { return x * k; }