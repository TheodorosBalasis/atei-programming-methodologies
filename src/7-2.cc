

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

	void pros(int k) {
		x += k;
		y += k;
	}

	friend int pol(SH& ob, int k);
};

int pol(SH& ob, int k) {
	ob.x *= k;
	return ob.x;
}

SH addobs(SH& ob1, SH& ob2) {
	SH newObj;
	int ob1x, ob2x, ob1y, ob2y;

	ob1.getxy(ob1x, ob1y);
	ob2.setxy(ob2x, ob2y);
	newObj.setxy(ob1x + ob2x, ob1y + ob2y);

	return newObj;
}

int main() {
    return 0;
}