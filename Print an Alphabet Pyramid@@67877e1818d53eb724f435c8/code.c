#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        char ch='A';
        for(k=1;k<=i;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}