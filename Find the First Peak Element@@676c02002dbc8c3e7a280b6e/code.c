#include <stdio.h>
int main()
{
    int n,i;
    printf("");
    scanf("%d",&n);
    int a[n];
    printf("");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int g=0;
    for(i=0;i<n;i++)
    {
        while(a[i]>g){
        if(i==0 || a[i]>=a[i-1] && i==(n-1) || a[i]>=a[i+1])
        printf("%d\n",a[i]);
        }
    }
    return 0;
}