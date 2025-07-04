#include <stdio.h>

int main(void)
{
    int N, a, cnt = 0, sum = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        cnt = 0;
        scanf("%d", &a);

        if (a == 1)
        {
            continue;
        }
        else if (a == 2 || a == 3)
        {
            sum++;
            continue;
        }
        else
        {
            for (int j = 2; j < a; j++)
            {
                if (a % j == 0)
                {
                    break;
                }
                cnt++;
            }

            if (cnt == a - 2)
            {
                sum++;
            }
        }
    }
    printf("%d", sum);

    return 0;
}
