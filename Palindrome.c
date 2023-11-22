#include <stdio.h>
int main()
{
    int n,a,rev=0,t;
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if (rev==t)
    printf("True");
    else 
    printf("False");
}