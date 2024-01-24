#include <stdio.h>
int main()
{
    char str[100];
    int sum=0,i;
    fgets(str,sizeof(str),stdin);
    for (i=0;str[i]!=NULL;i++)
    {
        if (str[i]>='0' && str[i]<='9')
        sum+=str[i]-'0';
    }
    printf("%d",sum);
    
}