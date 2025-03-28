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
    int x,n,c=0;
    for(x=1;x<=n;x++)
    {
        if(n%x==0)
        c++;
    }
    if(c==2)
    printf("1");
    else
    printf("0");

    return 0;


}