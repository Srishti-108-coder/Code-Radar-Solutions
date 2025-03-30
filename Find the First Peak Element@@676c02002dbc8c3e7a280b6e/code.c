#include <stdio.h>
int main()
{
    int n,a[n],i;
    printf("");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        printf("%d\n",a[i]);
        else
        printf("-1");
    }
    return 0;
}