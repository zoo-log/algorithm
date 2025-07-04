#include <stdio.h>

int main(void)
{
    int a, b, c, n = 1, tmp = 1;
    scanf("%d %d %d", &a, &b, &c);

    tmp = b;
    for(;;)
    {
        if (tmp / 10 == 0)
        {
            break;
        }
        tmp /= 10;
        n++;

    }
    printf("%d\n", a+b-c);
    for (int i = 0; i < n; i++)
    {
        a *= 10;
    }
    printf("%d", a+b-c);
    return 0;
}
