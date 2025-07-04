#include <stdio.h>

int main(void)
{
    int N,M;
    scanf("%d %d", &N, &M);

    int A[N][M], B[N][M];

    for (int i = 0; i < N * M; i++)
    {
        scanf("%d", &A[0][0] + i);
    }
    for (int i = 0; i < N * M; i++)
    {
        scanf("%d", &B[0][0] + i);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
