#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int c;
    scanf("%d",&n);
    c=n/4;
    if (n<=4)
    printf("1");
    else if (n%4==0)
    printf("%d",c);
    else
    printf("%d",(n/4)+1);
    
}