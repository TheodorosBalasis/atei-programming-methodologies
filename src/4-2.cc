
int syn(char *s, char ch);

int main() { return 0; }

int syn(char *s, char ch) {
	int count = 0;

	char current = s[0];

	for (int i = 0; current != 0; i++) {
		current = s[i];
		if (current == ch) {
			count++;
		}
	}

	return count;
}