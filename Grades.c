#include <stdio.h>
#include <math.h>
int main()
{
    float p,c,b,m,cs,per;
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&cs);
    per=((p+c+b+m+cs)/500)*100;
    if (per>=90)
    printf("Grade A");
    else if (per>=80)
    printf("Grade B");
    else if (per>=70)
    printf("Grade C");
    else if (per>=60)
    printf("Grade D");
    else if (per>=40)
    printf("Grade E");
    else
    printf("Grade F");
}