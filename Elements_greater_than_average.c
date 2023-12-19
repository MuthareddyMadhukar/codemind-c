#include <stdio.h>
int main()
{
    int i,n,sum,avg,count=0;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if (x[i]>=avg)
        {
            count++;
        }
    }
    printf("%d",count);
    
}