#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::strcpy;
using std::strlen;

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

	friend SH operator^(SH& obj, int k);

	friend ostream& operator<<(ostream& os, const SH& ob);
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

SH operator^(SH& obj, int k) {
	SH newObj;
	int newX, newY, originalX, originalY;
	obj.getxy(originalX, originalY);
	newX = 1;
	newY = 1;
	for (int i = 0; i < k; i++) {
		newX *= originalX;
		newY *= originalY;
	}
	newObj.setxy(newX, newY);
	return newObj;
}

ostream& operator<<(ostream& os, const SH& ob) {
	os << ob.x << " --- " << ob.y << endl;
	return os;
}

class DS : public SH {
	char* s;
	int len;

   public:
	DS() : SH() {
		s = "";
		len = 0;
	}

	DS(char* s, int len, int a, int b) : SH(a, b) {
		strcpy(this->s, s);
		this->len = len;
	}

	DS(int a, int b, char* s) : SH(a, b) {
		strcpy(this->s, s);
		len = strlen(s);
	}

	~DS(void) {
		if (s) {
			delete s;
		}
	}

	void set(char* a) {
		s = a;
	}

	char* get() {
		return s;
	}

	void emf() {
		int x, y;
		getxy(x, y);
		cout << s << " " << x << " " << y;
	}
};

int main() {
	DS o1;
	o1.set("Forrest Knight");
	o1.emf();
	cout << endl;
	DS o2(4,5,"The sting");
	o2.emf();

	return 0;
}