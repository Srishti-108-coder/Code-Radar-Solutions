#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int num=1;
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}