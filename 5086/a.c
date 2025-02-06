#include <stdio.h>

int main(void)
{
    int a = 1, b;

    for (;;)
    {
        scanf("%d %d", &a, &b);

        if (a == 0)
        {
            return 0;
        }

        if (a > b && a % b ==0)
        {
            printf("multiple\n");
        }
        else if (a < b && b % a == 0)
        {
            printf("factor\n");
        }
        else
        {
            printf("neither\n");
        }
    }
}
