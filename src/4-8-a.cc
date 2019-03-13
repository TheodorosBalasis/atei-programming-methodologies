// The difference between lowercase and uppercase characters in ASCII is 32.
// The ternary operator is used to avoid modifying a non-lowercase letter input.

#define TOUPPER(x) (x >= 97 && x <= 122 ? x - 32 : x)

int main() { return 0; }