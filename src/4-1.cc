

int syn(char *pc, char ch, int n);

int main() { return 0; }

int syn(char *pc, char ch, int n) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (pc[i] == ch) {
			count++;
		}
	}

	return count;
}