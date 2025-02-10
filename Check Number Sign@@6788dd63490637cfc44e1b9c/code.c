#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    printf("Negative");
    else if (n==0)
    printf("zero");
    else if(n>0)
    printf("Positive");
    else
    printf("please enter only 0 or integers");
    return 0;
}