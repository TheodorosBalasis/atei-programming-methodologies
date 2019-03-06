

void abx(int x, int *a, char *flag);

int main() { return 0; }

void abx(int x, int *a, char *flag) {
	*a = x < 0 ? -x : x;
	*flag = x % 3 == 0 ? 'Y' : 'N';
}