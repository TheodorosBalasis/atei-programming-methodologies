

void ksp(char a, char &b);

int main() { return 0; }

void ksp(char a, char &b) {
	if (a >= 97 && a <= 122) {
		b = a - 32;
	} else {
		b = a;
	}
}