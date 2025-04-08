#include <stdio.h>

int main() {
    unsigned int number, position = 0;

    printf("");
    scanf("%u", &number);

    if (number == 0) {
        printf("The number has no set bits (it's zero).\n");
        return 0;
    }

    while ((number & 1) == 0) {
        number >>= 1;  
        position++;    
    }

    printf("%u\n", position);
    return 0;
}
