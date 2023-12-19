#include <stdio.h>
int main()
{
    int i,n,flag=1;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if (x[i]%2!=0 && i%2==0)
       { 
         flag=0;
        break;
       }
    }
    if (flag==1)
    printf("True");
    else
    printf("False");
}