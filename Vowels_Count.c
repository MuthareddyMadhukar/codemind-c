#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,count=0;
    for (i=0;str[i];i++)
    {
        if (str[i]=='a'|| str[i]=='e'||str[i]=='i'||
           str[i]=='o'|| str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
           count++;
    }
    printf("%d",count);
}