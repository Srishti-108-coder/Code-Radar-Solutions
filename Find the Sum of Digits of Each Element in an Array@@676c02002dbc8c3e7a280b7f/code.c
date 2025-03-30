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
    int r;
    for(i=0;i<n;i++)
    {
        int s=0;
        while(a[i] != 0){
        r=a[i]%10;
        s=s+r;
        a[i]=a[i]/10;
        }
        if(s<0)
        printf("%d ",0-s);
        else
        printf("%d",s)
    }

}