#include <stdio.h>

int main() {
    unsigned int number, flippedNumber;

    // Input the number
    printf("");
    scanf("%u", &number);

    // Perform bitwise NOT
    flippedNumber = ~number;

    printf("%u\n", flippedNumber);

    return 0;
}
