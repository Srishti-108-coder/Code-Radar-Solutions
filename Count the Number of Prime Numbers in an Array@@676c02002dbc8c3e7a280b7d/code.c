#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    int a[n],i,c1=0;
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    int x;
    for(i=0;i<n;i++)
    {
        int c=0
        if(a[i]>1)
        {
        for(x=1;x<=a[i];x++)
        {
        if(a[i]%x==0)
        c++;
        }
        }
        if(c==2)
        c1++;
    }
    printf("%d",c1);
}