#include <stdio.h>
int main()
{
    int n,i,count=0;
    int arr[n];
    scanf("%d",&n);
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<=n-1;i++)
    {
        if (arr[i-1]%2!=0 && arr[i]%2==0 && arr[i+1]%2!=0)
        count+=1;
    }
    printf("%d",count);
}