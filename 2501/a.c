#include <stdio.h>

int main(void)
{
    int N, K, cnt = 0, tmp = 0;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cnt++;
        }
        if (cnt == K)
        {
            tmp = i;
            break;
        }
    }
    printf("%d", tmp);
    return 0;
}
