#include <stdio.h>
int main()
{
    int N,n,i,flag=0;
    scanf("%d",&N);
    int x[N];
    for (i=0;i<=N-1;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&n);
    for (i=0;i<=N-1;i++)
    {
        if (n==x[i] && x[i]%n==0)
        flag=1;
    }
    if (flag==1)
    printf("True");
    else
    printf("False");
}