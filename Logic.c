#include<stdio.h>
int main()
{
    int a[2][2][2];
    int i, j, k;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            for (k = 0; k <= 1; k++)
            {
                a[i][j][k] = (i || (j || k));
            }
        }
    }
    printf ("A\tB\tC\tY\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            for (k = 0; k <= 1; k++)
            {
                printf ("%d\t%d\t%d\t%d\n", i, j, k, a[i][j][k]);
            }
        }
    }
    return 0;
}
