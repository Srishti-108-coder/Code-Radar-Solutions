#include<stdio.h>
int main()
{
    int n,i,j;
    printf("");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int s;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            printf("%d",a[i])
        }
    }
    printf("-1");
    return 0;
}