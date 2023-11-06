#include <stdio.h>
int main()
{
    int n,r,res=0;
    scanf("%d",&n);
    while (n>0)
  {
      r=n%10;
    res=res+r;
    n=n/10;
  }
    printf("%d",res);
    
}