#include <stdio.h>

int main(void)
{
    int tmp = 0;
    int a[31] = {0, };

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &tmp);
        a[tmp]++;
    }

    for (int i = 1; i < 31; i++)
    {
        if (a[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
