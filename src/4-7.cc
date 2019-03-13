

char *ptoc(char *str, char ch);

int main() { return 0; }

char *ptoc(char *str, char ch) {
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == ch) {
			return &str[i];
		}
	}

	return nullptr;
}