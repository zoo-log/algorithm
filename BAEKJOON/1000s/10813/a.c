#include <stdio.h>

int main(void)
{
    int N, M, j, k, tmp;
    scanf("%d %d", &N, &M);

    int a[N+1];

    for (int i = 1; i < N + 1; i++)
    {
        a[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &j, &k);

        tmp = a[j];
        a[j] = a[k];
        a[k] = tmp;
    }

    for (int i = 1; i < N + 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
