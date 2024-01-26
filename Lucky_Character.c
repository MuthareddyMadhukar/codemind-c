#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[10];
    scanf("%[^
]c",&s);
    printf("%c",s[6]);
}