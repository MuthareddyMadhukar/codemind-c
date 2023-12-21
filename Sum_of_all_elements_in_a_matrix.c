#include <stdio.h>
int main()
{
    int r, c, sum = 0;
    scanf("%d%d", &r, &c);
    int mat[r][c];
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    printf("%d",sum);

    return 0;
}