#include <stdio.h>

int main(void)
{
    int a, b, c;

    for (;;)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0)
        {
            return 0;
        }
        if (a + b <= c || b + c <= a || c + a <= b)
        {
            printf("Invalid\n");
        }
        else if (a == b && b == c)
        {
            printf("Equilateral\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalene\n");
        }
    }

    return 0;
}
