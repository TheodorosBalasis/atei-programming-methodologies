#include <fstream>
#include <iostream>

class Proion {
   public:
	int kod;
	int pos;
	float timi;
	char perigrafi[40];
};

using std::atoi;
using std::cout;
using std::endl;
using std::ifstream;
using std::rand;

int main(int argc, char **argv) {
	if (argc < 3) {
		cout << "Invalid number of arguments!";
		return 1;
	}

	int index = atoi(argv[2]);

	Proion obj;
	ifstream stream;

	stream.open(argv[1]);
	stream.seekg(index * sizeof(obj));

	stream.read((char *)&obj, sizeof(obj));

	cout << "Code: " << obj.kod << endl;
	cout << "Quantity: " << obj.pos << endl;
	cout << "Price: " << obj.timi << endl;
	cout << "Description: " << obj.perigrafi << endl;

	return 0;
}