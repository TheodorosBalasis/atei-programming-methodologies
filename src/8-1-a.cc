#include <iostream>

using std::cout;
using std::endl;

class Bas {
	int ib;

   public:
	float z;

	Bas(int ib) {
		this->ib = ib;
	}
};

class Par1 : virtual public Bas {
	int ip1;

   public:
	float z1;

	Par1(int ib, int ip1) : Bas(ib) {
		this->ip1 = ip1;
	}
};

class Par2 : virtual public Bas {
	int ip2;

   public:
	float z2;

	Par2(int ib, int ip2) : Bas(ib) {
		this->ip2 = ip2;
	}
};

class Eng : public Par1, public Par2 {
	int ie;

   public:
	float sum;

	Eng(int ib, int ip1, int ip2, int ie)
	    : Par1(ib, ip1), Par2(ib, ip2), Bas(ib) {
		this->ie = ie;
	}
};

int main() {
	int ib = 3, ip1 = 4, ip2 = 5, ie = 6;

	Bas b(ib);
	Par1 op1(ib, ip1);
	Par2 op2(ib, ip2);
	Eng ob(ib, ip1, ip2, ie);

	ob.z = 4.2;
	ob.z1 = 3.14;
	ob.z2 = 1.6;
	ob.sum = ob.z + ob.z1 + ob.z2;
	cout << ob.sum << endl;

	return 0;
}
