#include <stdio.h>
int main()
{
    int n,i,avg,sum=0,flag=0;
    scanf("%d
",&n);
    int x[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    avg=sum/n;
    for (i=0;i<=n-1;i++)
    {
         if (avg==x[i])
         flag=1;
        
    }
    if (flag==1)
    printf("True");
    else
    printf("False");
}