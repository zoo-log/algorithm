#include <stdio.h>

int main(void)
{
    int N, M, j, k, tmp = 0;
    int a[101];

    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++)
    {
        a[i] = i;
    }

    for (int b = 0; b < M; b++)
    {
        scanf("%d %d", &j, &k);
        for (int i = 0; i <= (k-j)/2; i++)
        {
            tmp = a[j+i];
            a[j+i] = a[k-i];
            a[k-i] = tmp;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
