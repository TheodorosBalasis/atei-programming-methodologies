

int chk(char ch);

int main() { return 0; }

int chk(char ch) {
	int value;

	switch (ch) {
		case 'A':
		case 'B':
			value = 4;
			break;
		case 'C':
			value = 2;
			break;
		case 'D':
		case 'E':
		case 'F':
			value = 1;
			break;
		default:
			value = -1;
	}

	return value;
}