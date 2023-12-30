#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,sum=0,count=0,avg;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg =sum/n;
    for (i=0;i<n;i++)
    {
        if (arr[i]<avg || arr[i]==avg)
        count++;
    }
    printf("%d",count);
}