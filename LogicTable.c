#include<stdio.h>
void main()
{
    int a[2][2][2][2][2];
    int i, j, k, l, m;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            for (k = 0; k <= 1; k++)
            {
                for (j = 0; j <= 1; j++)
                {
                    for (k = 0; k <= 1; k++)
                    {
                        a[i][j][k][l][m] = (i || j || k || l || m);
                    }
                }
            }
        }
    }
    printf ("A\tB\tC\tD\tE\tY\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            for (k = 0; k <= 1; k++)
            {
                for (j = 0; j <= 1; j++)
                {
                    for (k = 0; k <= 1; k++)
                    {
                        printf ("%d\t%d\t%d\t%d\t%d\t%d\n", i, j, k, l, m, a[i][j][k][l][m]);
                    }
                }
            }
        }
    }
}
