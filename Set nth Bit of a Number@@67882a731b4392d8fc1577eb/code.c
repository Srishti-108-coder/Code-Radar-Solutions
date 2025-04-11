#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n); // Use bitwise OR to set the nth bit
}

int main() {
    int num, n, result;

    printf("");
    scanf("%d", &num);

    printf("");
    scanf("%d", &n);

    result = setNthBit(num, n);

    printf("%d\n", result);

    return 0;
}
