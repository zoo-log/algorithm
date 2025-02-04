#include <stdio.h>

int main(void)
{
    int N, M, i, j, k = 0;
    scanf("%d %d", &N, &M);
    int a[N+1];

    for (int d = 0; d < N+1; d++)
    {
        a[d] = 0;
    }

    for (int b = 0; b < M; b++)
    {
        scanf("%d %d %d", &i, &j, &k);

        for (i; i <= j; i++)
        {
            a[i] = k;
        }
    }

    for (int c = 1; c < N+1; c++)
    {
        printf("%d ", a[c]);
    }

    return 0;
}
