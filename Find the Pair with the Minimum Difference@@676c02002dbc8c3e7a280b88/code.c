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
    int d = a[0]-a[1];
    for(i=0;i<n;i++)
    {
        int p;
        p=a[i]-a[i+1];
        if(d>p);
        printf("%d %d",a[i],a[i+1]);
    }
}