#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < 2 * N - 1; i++)
    {
        if (i < N)
        {
            for (int j = 0; j < N - i -1; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < (2 * i) + 1; k++)
            {
                printf("*");
            }
        }
        
        else if ( i >= N)
        {
            for (int j = 0; j < (i+1) - N; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < (2*N-1) - ((i+1-N) * 2); k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
