#include <stdio.h>
int main()
{
    int n,res=0,p=1,a;
    scanf("%d",&n);
    while (n>0)
    {
        a=n%10;
        res+=a;
        p*=a;
        n=n/10;
    }
    if (res==p)
    printf("Spy Number");
    else 
    printf("Not Spy Number");
}