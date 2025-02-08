#include <stdio.h>
int main() {
    int n,r;
    scanf("%d",&n);
    while(n>0)
    {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        r=n%2;
        printf("%d",r);
        n=n/2;
    }
    return 0;
}
    