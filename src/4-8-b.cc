// The difference between lowercase and uppercase characters in ASCII is 32.
// The ternary operator is used to avoid modifying a non-lowercase letter input.

inline char TOUPPER(char x);

int main() { return 0; }

inline char TOUPPER(char x) {
    return x >= 97 && x <= 122 ? x - 32 : x;
}