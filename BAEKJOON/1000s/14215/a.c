#include <stdio.h>

int main(void)
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);

    if (a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }

    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    if (a + b > c)
    {
        printf("%d", a+b+c);
    }
    else
    {
        c = a + b - 1;
        printf("%d", a+b+c);
    }

    return 0;
}
