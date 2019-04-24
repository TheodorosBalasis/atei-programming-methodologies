#include <iostream>
#include <fstream>

using std::atoi;
using std::cout;
using std::endl;
using std::rand;
using std::ofstream;

int main(int argc, char **argv) {
    if (argc < 3) {
        cout << "Invalid number of arguments!" << endl;
        return 1;
    }

    ofstream ostream;
    ostream.open(argv[2]);

    int num = atoi(argv[1]);

    ostream << "TheodorosBalasis ";
    ostream << num << ' ';
    for (int i = 0; i < num; i++) {
        ostream << (rand() % (9999 + 1)) << ' ';
        ostream << (1 + (rand() % (9 - 1 + 1))) << ' ';
        ostream << ((float)(200 + (rand() % (2000 - 200 + 1))) / 100.0) << ' ';
    }
}