#include <stdio.h>
int main()
{
    int n,x,t;
    printf("");
    scanf("%d",&n);
    for(x=1;x<=10;x++)
    {
        t=n*x;
        printf("%d x %d = %d\n",n,x,t);

    }
    return 0;
}