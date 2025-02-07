#include <stdio.h>
int main() {
    int n,r;
    printf(" ");
    scanf("%d",&n);
    while(r==0 || r==1){
    if(n==1)
    return 1;
    if(n==0)
    return 0;
    r=n%10;
    printf("%d",&r);
    }


    return 0;
}