

char ksp(char a);

int main() { return 0; }

char ksp(char a) {
	if (a >= 97 && a <= 122) {
		return a - 32;
	} else {
		return a;
	}
}