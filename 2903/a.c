#include <stdio.h>

int main(void)
{
    int N, sum = 0, a = 1;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        a *= 2;
    }

    printf("%d", (a+1) * (a+1));
    return 0;
}
