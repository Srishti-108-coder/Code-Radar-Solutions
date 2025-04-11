#include <stdio.h>

int main() {
    int num, flipped;

    printf("");
    scanf("%d", &num);

    flipped = ~num; 

    printf("%d\n", flipped);

    return 0;
}
