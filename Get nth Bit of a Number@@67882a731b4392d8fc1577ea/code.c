#include <stdio.h>

int main() {
    unsigned int number, n, bitValue;

    printf("");
    scanf("%u", &number);

    printf("");
    scanf("%u", &n);

    bitValue = (number >> n) & 1;

    printf("%u\n",bitValue);

    return 0;
}
