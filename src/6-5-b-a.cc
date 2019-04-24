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
using std::ifstream;
using std::rand;
using std::atoi;

int main(int argc, char **argv) {
	if (argc < 3) {
		cout << "Invalid number of arguments!";
		return 1;
	}

	ifstream stream;
	stream.open(argv[1]);

    int targetKod = atoi(argv[2]);

	for (int i = 0; i < 5; i++) {
		Proion obj;
		stream.read((char *)&obj, sizeof(obj));

        if (obj.kod == targetKod) {
            cout << "Code: " << obj.kod << endl;
            cout << "Quantity: " << obj.pos << endl;
            cout << "Price: " << obj.timi << endl;
            cout << "Description: " << obj.perigrafi << endl;
        }
	}

	return 0;
}