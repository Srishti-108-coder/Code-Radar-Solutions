#include <stdio.h>
int main() {
    int n, r, binary[32], i = 0;
    scanf("%d", &n);
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    int j=i-1;
    if(j==1)
    printf("Set");
    else
    printf("Not Set");
    
    return 0;
}
