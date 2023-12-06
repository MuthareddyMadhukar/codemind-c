#include <stdio.h>
int main()
{
    int n,i,s;
    scanf("%d
",&n);
    int x[n];
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&x[i]);
        s=x[0];
        if (s>x[i])
        s=x[i];
    }
    printf("%d",s);
}