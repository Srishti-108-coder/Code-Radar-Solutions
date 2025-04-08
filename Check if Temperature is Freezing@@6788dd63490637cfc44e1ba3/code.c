#include <stdio.h>

int main() {
    float temperature;

    printf("");
    scanf("%f", &temperature);

    if (temperature <= 0) {
        printf("Freezing.\n");
    } else {
        printf("Not Freezing.\n");
    }

    return 0;
}
