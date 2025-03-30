#include<stdio.h>
int main()
{
    int n,i;
    printf("");
    scanf("%d",&n);
    int a[n],g=0,s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>g)
        a[i]=g;
        if(a[i]<s)
        a[i]=s;
    }
    printf("%d %d",s,g);
}