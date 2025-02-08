#include <stdio.h>
int main() {
    int n,q;
    scanf("%d",n);
    while(n>0)
    {
        if(n==0 || n==1)
        break;
        else
        r=n%2;
        printf("%d",r);
        q=n/2;
    }
    return 0;
}
    