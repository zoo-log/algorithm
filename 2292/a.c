#include <stdio.h>

int main(void)
{
    long long int N, A = 1;
    int b = 1, cnt = 0;
    scanf("%lld", &N);

    while(A < N)
    {
        A += 6 * b;
        b++;
        cnt++;
    }

    printf("%d", cnt + 1);
}
