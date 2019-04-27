

class MyAr {
	int* p;
	int len;

   public:
	MyAr() {
		p = nullptr;
		len = 0;
	}

	MyAr(int a) {
		p = new int[a];
		len = a;
	}

	MyAr(const MyAr& ob) {
		p = ob.p;
		len = ob.len;
	}

	~MyAr() {
		delete p;
	}

	MyAr& operator=(const MyAr& ox) {
		p = ox.p;
		len = ox.len;
		return *this;
	}

	int& operator[](int i) {
		return p[i];
	}

	int length() {
		return len;
	}

	int* begin() {
		return p;
	}

	int* end() {
		return p + ((len - 1) * sizeof(int));
	}

	int* rbegin() {
		return end();
	}

	int* rend() {
		return begin();
	}
};

int main() {
	MyAr a;
	MyAr b(10);
	for (int i = 0; i < b.length(); ++i) {
		b[i] = i;
	}
	a = b;
	MyAr c(b);
	return 0;
}