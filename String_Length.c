#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int i,count=0;
    char s[20];
    scanf("%[^
]c",&s);
    for (i=0;s[i]!=NULL;i++)
    {
       count++;
    }
    printf("%d",count);
}