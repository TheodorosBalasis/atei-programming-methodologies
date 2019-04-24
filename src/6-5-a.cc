#include <fstream>
#include <iostream>

class Proion {
   public:
	int kod;
	int pos;
	float timi;
	char perigrafi[40];
};

using std::cout;
using std::endl;
using std::ofstream;
using std::rand;

int main(int argc, char **argv) {
	if (argc < 2) {
		cout << "Invalid number of arguments!";
		return 1;
	}

	ofstream stream;
	stream.open(argv[1]);

	for (int i = 0; i < 5; i++) {
		Proion obj;
		obj.kod = rand() % (9999 + 1);
		obj.pos = 1 + (rand() % (9 - 1 + 1));
		obj.timi = (float)(200 + (rand() % (2000 - 200 + 1))) / 100.0;
		for (int j = 0; j < 39; j++) {
			obj.perigrafi[j] = '.';
		}
		obj.perigrafi[39] = 0;
		stream.write((char *)&obj, sizeof(obj));
	}

	return 0;
}