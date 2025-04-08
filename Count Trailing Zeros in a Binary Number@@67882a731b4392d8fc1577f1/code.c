#include <stdio.h>

int main() {
    unsigned int number, trailingZeros = 0;

    printf("");
    scanf("%u", &number);

    if (number == 0) {
        printf("The number has infinite trailing zeros (it's zero).\n");
        return 0;
    }

    while ((number & 1) == 0) {  
        number >>= 1;           
        trailingZeros++;
    }

    printf("%u\n", trailingZeros);

    return 0;
}
