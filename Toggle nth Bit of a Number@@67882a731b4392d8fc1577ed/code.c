#include <stdio.h>

int main() {
    unsigned int number, n, result;

    printf("");
    scanf("%u", &number);

    printf("");
    scanf("%u", &n);

    result = number ^ (1 << n);

    printf("%u\n", result);

    return 0;
}
