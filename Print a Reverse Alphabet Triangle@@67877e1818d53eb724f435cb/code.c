#include<stdio.h>
int main()
{
    int n,i,j;
    printf("");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=n;j>=i;j--)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}