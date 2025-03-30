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
    int g=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>g){
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        printf("%d\n",a[i]);
        }
    }
    return 0;
}