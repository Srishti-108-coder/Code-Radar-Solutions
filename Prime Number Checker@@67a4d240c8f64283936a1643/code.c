#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    prime(n);
}
int prime(int n)
{
    int x,c=0;
    while(x<=n)
    {
        if(n%x==0)
        c++;
    }
    x++;
    if(c==2)
    printf("1");
    else
    printf("0");

    return 0;
}