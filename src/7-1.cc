

class SH {
	int x;
	int y;

   public:
	float z;

	SH(void) {
		x = 0;
		y = 0;
	}

	SH(int num) {
		x = num;
		y = num;
	}

	SH(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void setxy(int a, int b) {
		x = a;
		y = b;
	}

	void getxy(int& a, int& b) {
		a = x;
		b = x;
	}

	int area(void) {
		return x * y;
	}
};

int main() {
	return 0;
}