#include <stdio.h>
int main()
{
    int n,s=0,p,a;
    scanf("%d",&n);
    p=n*n;
    while (p!=0)
    {
      a=p%10;
      s+=a;
      p/=10;
    }
    if (n==s)
    printf("Neon Number");
    else 
    printf("Not Neon Number");
}