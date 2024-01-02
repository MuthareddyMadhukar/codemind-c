#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int t=n,a=0,b=1,c=a+b;
    while(c<=n-2)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if (t==c)
    printf("True");
    else
    printf("False");
}