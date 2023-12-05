#include <stdio.h>

int main()
{    
    int array[100], maximum, N, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &array[i]);
    
    maximum = array[0];
    
    for (i = 1; i < N; i++)
    {
        if (array[i] > maximum)
        {
                maximum  = array[i];
                
        }
    }
    
    printf("%d",maximum);
    return 0;    
}