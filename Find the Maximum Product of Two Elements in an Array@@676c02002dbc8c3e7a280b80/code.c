#include<stdio.h>
int main()
{
    int n,i;
    printf("");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    int g=a[0]*a[1];
    for(i=0;i<n;i++)
    {
        int p,s;
        p=a[i]*a[i+1];
        if(p>g)
        g=p;
    }
    printf("%d",g);
}