#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,e,o;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
         if (i%2==0)
         {
             o+=x[i];
         }
         else if (i%2!=0)
         {
             e+=x[i];
         }
    }
    printf("%d",abs(o-e));
}