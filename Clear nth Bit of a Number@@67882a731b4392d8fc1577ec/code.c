#include <stdio.h>

int main() {
    unsigned int number, n, result;

    printf("");
    scanf("%u", &number);

    printf("");
    scanf("%u", &n);

    unsigned int mask = ~(1 << n);

    result = number & mask;

    printf("%u\n",  result);

    return 0;
}
