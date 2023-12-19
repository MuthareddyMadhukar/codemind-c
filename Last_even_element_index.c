#include <stdio.h>
int main()
{
    int n,i,even=0;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if (x[i]%2==0)
         even=i;
    }
    printf("%d",even);
}