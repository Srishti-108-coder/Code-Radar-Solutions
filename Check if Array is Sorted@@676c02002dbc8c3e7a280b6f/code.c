#include<stdio.h>
int main()
{
    int n,i;
    printf("");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    int p,s=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<=a[i+1])
        p=a[i];
    }
    if(p>s)
    printf("Sorted");
    else
    printf("Not Sorted");

}