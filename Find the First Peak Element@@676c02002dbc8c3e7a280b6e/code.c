#include <stdio.h>

int main() {
    int n, i;
    printf("");
    scanf("%d", &n);
    int a[n];
    printf("");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] >= a[i-1] && a[i] >= a[i+1]) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
