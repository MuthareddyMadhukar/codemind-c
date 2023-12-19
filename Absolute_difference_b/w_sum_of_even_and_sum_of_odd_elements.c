#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,se=0,so=0;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if (x[i]%2==0)
        {
            se+=x[i];
        }
        else if (x[i]%2!=0)
        {
            so+=x[i];
        }
    }
    printf("%d",abs(so-se));
}