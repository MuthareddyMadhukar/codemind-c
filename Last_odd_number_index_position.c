#include <stdio.h>
int main()
{
    int i,n,odd;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if (x[i]%2!=0)
        odd=i;
    }
    printf("%d",odd);
}