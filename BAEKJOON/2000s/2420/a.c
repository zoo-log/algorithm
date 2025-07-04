#include <stdio.h>

int main(void)
{
    long long int a, b, c;
    scanf("%lld %lld", &a, &b);

    if (a - b >= 0)
    {
        c = a-b;
    }
    else
    {
        c = b-a;
    }
    printf("%lld", c);
}
