#include <stdio.h>

int main(void)
{
    int T, a, b, tmp = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);

        tmp = a % 10;

        if (a == 1)
        {
            printf("1\n");
            continue;
        }

        for (int j = 1; j < b; j++)
        {
            tmp *= a;
            tmp %= 10;
        }
        if (tmp == 0)
        {
            printf("10\n");
        }
        else
        {
            printf("%d\n", tmp);
        }
    }
}
