#include <stdio.h>

int main(void)
{
    int M, N, min = 0, check, sum = 0;
    scanf("%d\n%d", &M, &N);

    for (int i = M; i <= N; i++)
    {
        check = 0;

        if (i == 1)
        {
            continue;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = 1;
                break;
            }
        }

        if (check == 0 && min == 0)
        {
            min = i;
            sum += i;
        }
        else if (check == 0)
        {
            sum += i;
        }
    }

    if (sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }

    return 0;
}
