// NOTE: Target string 't' is allocated to the same size as 's' inside the
//		 trim_copy function. An alternative solution is to rely on the null
// 		 terminator, but this would mean that 't' would have to be filled with
// 		 garbage data, which would affect program output. Remedying this would
// 		 require resizing 't', which would mean we'd have to count its size
// 		 anyway.

// NOTE 2: The 'gets' function is deprecated since C++11 and removed since C++14

// NOTE 3: The pointer for 't' is passed by reference so as to allocate it
// 		   inside the function.

#include <cstdio>
#include <iostream>

using std::cout;
using std::endl;
using std::gets;

void trim_copy(char *s, char *&t);

int main() {
	char *s, *t;

	cout << "Enter a string: ";
	gets(s);

	cout << "Pre-copy: " << s << "|" << endl;

	trim_copy(s, t);

	cout << "Post-copy: " << t << "|" << endl;

	return 0;
}

void trim_copy(char *s, char *&t) {
	// Get the size of the input string.
	int size = 0;
	for (int i = 0; s[i] != 0; i++) {
		size++;
	}

	t = new char[size];

	bool trailingSpacesPassed = false;

	for (int i = size - 1, tIndex, trailingSpaces = 0; i >= 0; i--) {
		if (!trailingSpacesPassed && s[i] != ' ') {
			trailingSpacesPassed = true;
			tIndex = size - 1 - trailingSpaces;
		}

		if (trailingSpacesPassed) {
			t[tIndex] = s[i];
			tIndex--;
		} else {
			trailingSpaces++;
		}
	}
}