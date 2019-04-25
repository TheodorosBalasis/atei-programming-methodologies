#include <iostream>

using std::cout;
using std::endl;

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

	void operator+(int k) {
		x += k;
		y += k;
	}

	friend int operator*(SH& ob, int k);
};

int operator*(SH& ob, int k) {
	ob.x *= k;
	return ob.x;
}

SH operator+(SH& ob1, SH& ob2) {
	SH newObj;
	int ob1x, ob2x, ob1y, ob2y;

	ob1.getxy(ob1x, ob1y);
	ob2.setxy(ob2x, ob2y);
	newObj.setxy(ob1x + ob2x, ob1y + ob2y);

	return newObj;
}

int main() {
	SH ob2(4, 7), ob1(9), obj;

	obj.setxy(3, 4);

	int a, b;
	obj.getxy(a, b);
	cout << "obj=" << a << " " << b << endl;

	ob1 + 5;
	ob1.getxy(a, b);
	cout << "ob1=" << a << " " << b << endl;

	obj * 7;
	obj.getxy(a, b);
	cout << "obj=" << a << " " << b << endl;

	SH obX;
	obX = ob2 + ob1;
	obX.getxy(a, b);
	cout << "obX=" << a << " " << b << endl;

	return 0;
}