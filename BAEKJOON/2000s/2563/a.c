#include <stdio.h>

int main(void)
{
    int T, arr[101][101] = {0, }, a, b, cnt = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);

        for (int j = 91 - b; j < 101 - b; j++)
        {
            for (int k = a; k < a + 10; k++)
            {
                arr[j][k] = 1;
            }
        }
    }

    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            if (arr[i][j] == 1)
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}
