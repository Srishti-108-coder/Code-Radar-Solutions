#include <stdio.h>

int main() {
    int num1, num2;

    printf("");
    scanf("%d", &num1);
    printf("");
    scanf("%d", &num2);

    if ((num1 ^ num2) >= 0) {
        printf("Same Sign \n");
    } else {
        printf("Different sign \n");
    }

    return 0;
}
