#include <stdio.h>
int main()
{
    char str;
    scanf("%c",&a);
    if(str==a || str==e || str==i || str==o || str==u)
    printf("Vowel");
    else if(str>0 && str<9)
    printf("Digit");
    else if(str==b || str==c || str==d || str==f || str==g || str==h || str==j || str==k || str==l || str==m || str==m || str==n || str==p || str==q || str==r || str==s || str==t || str==v || str==w || str==x || str==y || str==z )
    printf("Consonant");
    else
    printf("Special Character");
    return 0;
}