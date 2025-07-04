#include <stdio.h>

int main(void)
{
    int a = 1, b, c, max = 0;

    for (;;)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a==0)
        {
            break;
        }

        if ((a*a) + (b*b) == (c*c) || (b*b) + (c*c) == (a*a) || (c*c) + (a*a) == (b*b))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
