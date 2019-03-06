

void ksp(char &a);

int main() { return 0; }

void ksp(char &a) {
	if (a >= 97 && a <= 122) {
		a -= 32;
	}
}