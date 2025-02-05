#include <stdio.h>

int main() {
    int number;
    
    printf(" ");
    scanf("%d", &number);
    
    int ones_complement = ~number;
    
    printf("The one's complement of %d is %d\n", number, ones_complement);
    
    return 0;
}
