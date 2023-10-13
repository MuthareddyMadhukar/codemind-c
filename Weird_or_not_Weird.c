#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if ((n%2!=0) ||(n%2==0 && 6<=n && n<=20))
    {
        printf("weird");
    }
    if (n%2==0 && 2<=n && n<=5)
    {
        printf("not weird");
    }
    else if (n%2==0 && n>=20)
    printf("not weird");
}