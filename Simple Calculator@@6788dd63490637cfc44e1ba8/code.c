#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("");
    scanf("%lf", &num1);

    printf("");
    scanf(" %c", &operator); 

    printf("");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
    }

    return 0;
}
