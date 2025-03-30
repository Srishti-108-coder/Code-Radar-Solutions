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
    for(i=0;i<n;i++)
    {
        int p,s;
        p=a[i]*a[i+1];
        s=p;
    }
    int s[n],g;
    for(i=0;i<n;i++)
    {
        if(s[i]>s[i+1])
        g=s[i];
    }
    printf("%d",g);
}