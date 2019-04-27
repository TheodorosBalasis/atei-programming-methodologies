#include <iostream>

using std::cout;
using std::endl;

class Cx {
   public:
	Cx(float a) {
		x = a;
	}

	void setxy(float a, float b) {
		x = a;
		y = b;
	}

	float readx() {
		return x;
	}

	float ready() {
		return y;
	}

	virtual float Func() = 0;

   private:
	float x;
	float y;
};

class DCx : public Cx {
   public:
	DCx(float a) : Cx(a) {
	}

	float Func() {
		float a = readx();
		float y = a * 33.3;
		return y;
	}
};

class DCx2 : public Cx {
   public:
	DCx2(float a) : Cx(a) {
	}

	float Func() {
		float a = readx();
		float y = a / 1.650;
		return y;
	}
};

int main() {
	Cx *p;
	DCx ob1(5);

	p = &ob1;

	cout << ob1.readx() << " Podia se cm " << p->Func() << endl;

	return 0;
}