#include <stdio.h>
int main()
{
    int n,m,i,j,s,flag=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&s);
     for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (s==arr[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if (flag==1)
    printf("1");
    else
    printf("0");
    
}