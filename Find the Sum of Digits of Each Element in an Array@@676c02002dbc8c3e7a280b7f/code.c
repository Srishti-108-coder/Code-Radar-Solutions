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
    int r,sum=0;
    for(i=0;i<n;i++)
    {
        int s=0;
        while(a[i]>0){
        r=a[i]%10;
        s=s+r;
        a[i]=a[i]/10;
        }
        sum=sum+s;
    }
    printf("%d ",sum);

}