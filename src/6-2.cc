#include <fstream>
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

void copyByChar(ifstream &istream, ofstream &ostream);
void copyByLine(ifstream &istream, ofstream &ostream);

int main(int argc, char **argv) {
	if (argc < 3) {
		cout << "Invalid number of arguments!" << endl;
		return 1;
	}

	ifstream istream;
	ofstream ostream;

	istream.open(argv[1]);
	ostream.open(argv[2]);

	copyByChar(istream, ostream);

	istream.close();
	ostream.close();
	istream.open(argv[1]);
	ostream.open(argv[2]);

	copyByLine(istream, ostream);

	istream.close();
	ostream.close();

	return 0;
}

void copyByChar(ifstream &istream, ofstream &ostream) {
	int c;
	while (!istream.eof()) {
		c = istream.get();
		if (c != EOF) {
			ostream.put((char)c);
		}
	}
}

void copyByLine(ifstream &istream, ofstream &ostream) {
	char buffer[100];
	while (!istream.eof()) {
		istream.getline(buffer, 100);
		ostream << buffer << endl;
	}
}