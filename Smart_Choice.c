#include <stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d %d",&x,&y);
    a=(500-x*2)+(1000-(x+y)*4);
    b=(1000-y*4)+(500-(x+y)*2);
    if (a>b)
    printf("%d",a);
    else
    printf("%d",b);
    
}