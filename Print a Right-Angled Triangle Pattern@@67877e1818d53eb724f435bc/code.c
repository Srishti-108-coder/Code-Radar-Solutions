#include <stdio.h>
int main()
{
    int n,i,j;
    printf("");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}