#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d
",&n);
    int x[n];
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&x[i]);
        if (i%2==0)
        sum+=x[i];
    }
    printf("%d",sum);
}