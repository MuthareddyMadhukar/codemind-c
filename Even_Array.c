#include <stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if (x[i]%2!=0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    printf("False");
    else 
    printf("True");
    
}