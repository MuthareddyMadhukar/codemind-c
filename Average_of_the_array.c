#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d
",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&x[i]);
        sum+=x[i];
    }
   float avg=(float)sum/n;
    printf("%.2f",avg);
}