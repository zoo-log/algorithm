#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    if (N == 1)
    {
        return 0;
    }
    for (int i = 2; N != 1; i++)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
            N /= i;
            i = 1;
        }
    }

    return 0;
}
