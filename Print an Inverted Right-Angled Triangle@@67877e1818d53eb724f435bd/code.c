#include <stdio.h>
int main()
{
    int n,i,j;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>0i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}