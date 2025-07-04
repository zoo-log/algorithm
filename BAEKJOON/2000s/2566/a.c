#include <stdio.h>

int main(void)
{
    int A[9][9], max = 0, row = 0, col = 0;
    int* p;

    for (p = &A[0][0]; p <= &A[8][8]; p++)
    {
        scanf("%d", p);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("%d\n%d %d", max, row + 1, col + 1);

    return 0;
}
